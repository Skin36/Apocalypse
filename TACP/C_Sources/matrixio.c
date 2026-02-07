
/* dos enum
#define O_RDONLY	0x0000	// open for read only 
#define O_WRONLY	0x0001	// open for write only 
#define O_RDWR		0x0002	// open for read and write 
#define O_APPEND	0x0010	// writes done at end of file
#define O_CREAT 	0x0020	// create new file
#define O_TRUNC 	0x0040	// truncate existing file
#define O_NOINHERIT	0x0080	// file is not inherited by child process
#define O_TEXT		0x0100	// text file
#define O_BINARY	0x0200	// binary file
#define O_EXCL		0x0400	// exclusive open
*/


#include <stdlib.h>
#include "struc_init.h"
#include "matrixio.h"
#include "io.h"
#include "stdio.h"
#include <stdint.h>
#include <fcntl.h>



extern uint32_t EXPERIEN_proccesing_flag;

//typedef struct expirean_struc_t expirean;
//typedef expirean* expr;
//expr exp_ptr;

signed int  write_expirien_dat()
{

    int EXPERIEN_DAT;
    //exp_ptr = (struct expirean_struc_t*)malloc(100 * sizeof(struct expirean_struc_t));
    //exp_ptr = &expirean_temp_2;

    struct expirean_struct* expirean_ptr = expirean_t;


    EXPERIEN_DAT = _open("TACDATA/EXPERIEN.DAT", O_CREAT | O_WRONLY | O_APPEND | O_BINARY, 0600);
 
    int i;
    if (EXPERIEN_DAT != -1)
    {
        for (i=0; i < 100; ++expirean_ptr)
        {
            ++i;
            //printf("i: %d \n", i);
            if (expirean_ptr->flag == 2)
            {
                if (_write(EXPERIEN_DAT, expirean_ptr, 114) < 114)
                    return -2;
                //printf("flag: %d \n", expirean_ptr->flag);
                expirean_ptr->flag = 0;
                EXPERIEN_proccesing_flag = 1;
            }
        }
        if (_close(EXPERIEN_DAT) == -1)
            EXPERIEN_DAT = -3;
        else
            EXPERIEN_DAT = 0;
    }
    return EXPERIEN_DAT;
}

int WEAPEXP_write()
{
    unsigned int WEAPEXP;

    WEAPEXP = _open("TACDATA/WEAPEXP.DAT", O_CREAT | O_WRONLY | O_BINARY, 0600);
    //printf("WEAPEXP %p \n", WEAPEXP_1_1);
    if (WEAPEXP == -1)
        return 1;
    if (_write(WEAPEXP, WEAPEXP_1_1, 17160) < 17160)
        return 2;
    if (_write(WEAPEXP, WEAPEXP_2_t, 17160) < 17160)
        return 2;
    if (_close(WEAPEXP) == -1)
        return 3;
    return 0;
}

int read_WEAPEXP()
{
    unsigned int WEAPEXP;
    trunc_experian();
    WEAPEXP = _open("TACDATA/WEAPEXP.DAT", O_BINARY);
    //printf("WEAPEXP %p \n", WEAPEXP_1_1);
    if (WEAPEXP == -1)
        return 1;
    if (_read(WEAPEXP, WEAPEXP_1_1, 17160) < 17160)
        return 2;
    if (_read(WEAPEXP, WEAPEXP_2_t, 17160) < 17160)
        return 2;
    if (_close(WEAPEXP) == -1)
        return 3;
    return 0;
}

int trunc_experian()
{
    intptr_t hFile;
    struct _finddata_t c_file;
    uint8_t EXPERIEN_temp[11400];
    signed int v6;
    int result = 0;
    int TMPEXP;
    int EXPERIEN;
    int read_count;
    int v9;
    int v13;

    hFile = _findfirst("TACDATA/EXPERIEN.DAT", &c_file);

    if (hFile == -1L)
        return -1;
    v6 = c_file.size / 114;
    if (v6 > 10000)
    {
        if (rename("TACDATA/EXPERIEN.DAT", "TACDATA/TMPEXP.DAT"))
        {
            result = -3;
        }
        else
        {
            TMPEXP = _open("TACDATA/TMPEXP.DAT", O_BINARY);
            if (TMPEXP == -1)
            {
                result = -4;
            }
            else
            {
                EXPERIEN = _open("TACDATA/EXPERIEN.DAT", O_CREAT | O_WRONLY | O_BINARY, 0600);
                if (EXPERIEN == -1)
                {
                    result = -5;
                }
                else
                {
                    v9 = 0;
                    v13 = v6 - 10000;
                    printf("v13 %d \n", v13);
                    while (1)
                    {
                        read_count = _read(TMPEXP, EXPERIEN_temp, 11400);
                        if (read_count <= 0)
                            break;
                        if (v9 >= v13 && _write(EXPERIEN, EXPERIEN_temp, read_count) < read_count)
                            return -6;
                            
                        
                        printf("WEAPEXP %d \n", v9);
                        v9 += 100;
                    }
                    if (_close(TMPEXP))
                    {
                        result = -7;
                    }
                    else if (_close(EXPERIEN))
                    {
                        result = -8;
                    }
                    else
                    {
                        result = remove("TACDATA/TMPEXP.DAT");
                        if (result)
                            result = -9;
                        else
                            EXPERIEN_proccesing_flag = 1;
                    }
                }
            }
        }
    }
    return result;


}
