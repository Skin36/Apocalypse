#include <fcntl.h>
#include <io.h>
#include <sys\types.h>
#include <sys\stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <math.h>

struct brain_struct
{
    uint32_t index;
    uint32_t row_count;
    uint32_t section;
    struct float_sections
    {
        float shot_section[25][12];
        float total;
        float long_section[25][25];
    } fsection[6];
}brain_instance[25];

#pragma pack(push,1)
struct  experien_struct
{
    uint16_t flag;
    uint32_t index;
    uint32_t row_count;
    int32_t entry[25];
    uint32_t section;
};
#pragma pack(pop)


int section_array[25][6] = { 0 };
struct brain_struct* brain_ptr;
int brain_index_count_ = 0;

int fd;
char* BRAIN_DAT;

int load_brain(char* filename, int n);
int save_brain(char* filename, struct brain_struct* br);
int find_row_brain_dat(int index, int count, int section);
float calc_gauss(float input_value);




int fill_brain(void)
{
    char* file_brain = "TACDATA/BRAIN.DAT";
    char* file_exp = "TACDATA/EXPERIEN.DAT";

    brain_ptr = (struct brain_struct*)malloc(25 * sizeof(struct brain_struct));
    memset(brain_ptr, 0, 555900);
    struct experien_struct* exs_ptr = (struct experien_struct*)malloc(sizeof(struct experien_struct));
    int sec_temp_num = 0;
    int brn_row = 0;
    if ((fd = _open(file_exp, O_RDONLY | O_BINARY)) == -1) {
        printf("Cannot open file.\n");
    }

    /* --------------------------------------PART 1 set default values-------------------------------------------------------- */





    uint32_t v9;
    while (1)
    {
        if ((_read(fd, exs_ptr, 114)) != 114) {
            printf("EXPERIEN section less then 114 bytes.\n");
            break;
        }

        //printf("index %5d row_count %5d section %5d \n",exs_ptr->index,exs_ptr->row_count,exs_ptr->section);
        brn_row = find_row_brain_dat(exs_ptr->index, exs_ptr->row_count, exs_ptr->section);
        if (brn_row < 0)
            return -4;

        sec_temp_num++;
        v9 = exs_ptr->section + 1;
        if (v9 < (brain_ptr + brn_row)->section)
            v9 = (brain_ptr + brn_row)->section;
        (brain_ptr + brn_row)->section = v9;
        uint32_t v14 = 0;
        int* v11 = &section_array[brn_row][exs_ptr->section];

        //printf("index %5d row_count %5d section %5d \n",(brain_ptr + brn_row)->index,(brain_ptr + brn_row)->row_count,(brain_ptr + brn_row)->section);
        if (!*v11)
        {
            if ((brain_ptr + brn_row)->row_count > 0)
            {
                do
                {
                    (brain_ptr + brn_row)->fsection[exs_ptr->section].shot_section[v14][0] = 10000000000.0;
                    (brain_ptr + brn_row)->fsection[exs_ptr->section].shot_section[v14][1] = -20000000000.0;
                    ++v14;
                } while (v14 < (brain_ptr + brn_row)->row_count);
            }
        }
        ++* v11;
    }


        /*
        int k1;
        int n1;
        for (k1 = 0; k1<25; k1++)
        {

            for (n1 = 0; n1<6; n1++)
          {
            printf("index %5d section %5d count %5d \n",(brain_ptr + k1)->index,(brain_ptr + k1)->section,section_array[k1][n1]);
          }
        }
        

    save_brain("TACDATA/BRAIN2.DAT", brain_ptr);
    free(brain_ptr);
    free(exs_ptr);
    return 0;

*/


/* --------------------------------------PART 2  find min/max--------------------------------------------------------------- */
    int section_array_2[25][6] = { 0 };





    if (_lseek(fd, 0, 0))
        return -3;

    uint32_t k;
    float v107;
    float v105;
    float v109;
    float v110;
    float v26;
    float v27;
    while (1)
    {
        if ((_read(fd, exs_ptr, 114)) != 114)
        {
            printf("EXPERIEN section less then 114 bytes.\n");
            break;
        }
        brn_row = find_row_brain_dat(exs_ptr->index, exs_ptr->row_count, exs_ptr->section);
        int* v21 = &section_array[brn_row][exs_ptr->section];
        int* v20 = &section_array_2[brn_row][exs_ptr->section];

        if (*v21 < 100 || 100 * (*v21 / 100) > *v20 && !(*v20 % (*v21 / 100)))
        {
            for (k = 0; k < (brain_ptr + brn_row)->row_count; ++k)
            {
                v107 = exs_ptr->entry[k] + 0.5;
                //printf("v107 %f \n", v107);
                v110 = (brain_ptr + brn_row)->fsection[exs_ptr->section].shot_section[k][0] + (brain_ptr + brn_row)->fsection[exs_ptr->section].shot_section[k][1];
                //printf("v110 %f \n", v110);
                if (v110 <= v107)
                {
                    v26 = v107;
                }
                else
                {
                    v26 = v110;
                }


                v109 = exs_ptr->entry[k] - 0.5;
                v105 = (brain_ptr + brn_row)->fsection[exs_ptr->section].shot_section[k][0];
                if (v105 >= v109)
                {
                    v27 = v109;
                }
                else
                {
                    v27 = v105;
                }
                (brain_ptr + brn_row)->fsection[exs_ptr->section].shot_section[k][0] = v27;
                (brain_ptr + brn_row)->fsection[exs_ptr->section].shot_section[k][1] = v26 - v27;
            }

        }
        ++* v20;
    }

 /* --------------------------------------PART 3 scaling--------------------------------------------------------------- */
    int num;
    uint32_t m, n;
    uint32_t temp_section;

    if (_lseek(fd, 0, 0))
        return -3;

    for (num = 0; num < brain_index_count_; ++num)
    {
        temp_section = 0;


        if ((brain_ptr + num)->section > 0)
        {

            do
            {
                for (m = 0; m < (brain_ptr + num)->row_count; m++)
                {
                    for (n = 2; n < 12; ++n)
                    {
                        (brain_ptr + num)->fsection[temp_section].shot_section[m][n] = 0;
                    }
                }
                ++temp_section;
            } while (temp_section < (brain_ptr + num)->section);

        }
    }

    float section_array_3[25][6] = { 0.0 };

    int tmp_sec_num = sec_temp_num;

    int v47;
    float v115;
    float v46;
    while (1)
    {
        k = 0;
        if ((_read(fd, exs_ptr, 114)) != 114)
        {
            printf("EXPERIEN section less then 114 bytes.\n");
            break;
        }
        brn_row = find_row_brain_dat(exs_ptr->index, exs_ptr->row_count, exs_ptr->section);
        --tmp_sec_num;
        printf("tmp_sec_num %d \n", tmp_sec_num);
        v115 = exp(-tmp_sec_num * 0.0004);
        printf("v115 %f \n", v115);
        if ((brain_ptr + brn_row)->row_count > 0)
        {
            do
            {
                v46 = (exs_ptr->entry[k] - (brain_ptr + brn_row)->fsection[exs_ptr->section].shot_section[k][0]) / (brain_ptr + brn_row)->fsection[exs_ptr->section].shot_section[k][1] * 10;
                v47 = floor(v46);
                if (v47 <= 0)
                    v47 = 0;
                if (v47 >= 9)
                {
                    v47 = 9;
                }
                else
                {
                    if (v47 <= 0)
                        v47 = 0;

                }
                (brain_ptr + brn_row)->fsection[exs_ptr->section].shot_section[k][v47 + 2] = (brain_ptr + brn_row)->fsection[exs_ptr->section].shot_section[k][v47 + 2] + v115;
                ++k;
            } while (k < (brain_ptr + brn_row)->row_count);
            section_array_3[brn_row][exs_ptr->section] = section_array_3[brn_row][exs_ptr->section] + v115;
        }
    }


    /* --------------------------------------PART 4 calc Gaus-------------------------------------------------------------- */

    if(_lseek(fd, 0, 0))
        return -3;


    

        

      

        




    save_brain("TACDATA/BRAIN2.DAT", brain_ptr);
    free(brain_ptr);
    free(exs_ptr);
    return 0;
}




int find_row_brain_dat(int index, int row_count, int section) {
    int k = 0;
    int v20 = 0;
    int brain_index_count_temp = 0;

    if (brain_index_count_ > 0)
    {
        while (index != (brain_ptr + k)->index)
        {
            ++k;
            if (k >= brain_index_count_)
                goto lebel_8;
        }
        v20 = 1;
        if (row_count != 0)
            row_count = (brain_ptr + k)->row_count;
        brain_index_count_temp = k;
    }

lebel_8:
    if (!v20) {
        if (brain_index_count_ >= 25)
            return -1;
        brain_index_count_temp = brain_index_count_;
        (brain_ptr + brain_index_count_)->index = index;
        (brain_ptr + brain_index_count_)->row_count = row_count;
        (brain_ptr + brain_index_count_)->section = section;

        int i;
        int j;
        int k;
        int l;
        int n;
        int v9 = 0;
        for (i = 0; i < 6; ++i)
        {

            for (j = 0; j < row_count; ++j)
            {
                (brain_ptr + brain_index_count_)->fsection[i].shot_section[j][0] = -0.5;
                (brain_ptr + brain_index_count_)->fsection[i].shot_section[j][1] = 1.0;
                for (k = 2; k < 12; ++k)
                {
                    (brain_ptr + brain_index_count_)->fsection[i].shot_section[j][k] = 0;
                }

            }
            (brain_ptr + brain_index_count_)->fsection[i].total = 0;
            for (l = 0; l < 25; ++l)
            {
                for (n = 0; n < 25; ++n)
                {
                    if (l = n)//why it not work for [0][0] ?
                        (brain_ptr + brain_index_count_)->fsection[i].long_section[l][n] = 1;
                    else
                        (brain_ptr + brain_index_count_)->fsection[i].long_section[l][n] = 0;
                }
            }
            (brain_ptr + brain_index_count_)->fsection[i].long_section[0][0] = 1;

        }
        ++brain_index_count_;
    }

    return brain_index_count_temp;
}

// загрузка из файла массива структур
int load_brain(char* filename, int struc_count)
{
    FILE* fp;
    char* c;
    int i;
    // выделяем память для количества данных
    if ((fp = fopen(filename, "rb")) == NULL)
    {
        perror("Error occured while opening file");
        return 1;
    }
    // выделяем память для считанного массива структур
    brain_ptr = (struct brain_struct*)malloc(struc_count * sizeof(struct brain_struct));
    c = (char*)brain_ptr;
    // после записи считываем посимвольно из файла
    while ((i = getc(fp)) != EOF)
    {
        *c = i;
        c++;
    }
    fclose(fp);
    return 0;
}

// запись структуры в файл
int save_brain(char* filename, struct brain_struct* br)
{
    FILE* fp;
    uint8_t* c;
    if ((fp = fopen(filename, "wb")) == NULL)
    {
        perror("Error occured while opening file");
        return 1;
    }
    // устанавливаем указатель на начало структуры
    c = (uint8_t*)br;
    // посимвольно записываем в файл структуру
    int i;
    for (i = 0; i < 555900; i++)
    {
        putc(*c++, fp);
    }
    fclose(fp);
    return 0;
}

float calc_gauss(float input_value) {
    float output_value;
    float v10;
    float v2, v3, v4, v5, v6, v7, v8;

    if (input_value >= 0.000001)
    {
        if (input_value > 0.999999)
            return 5.0;
        v10 = 0;
        do
        {
            v2 = fabs(v10 * 0.707106781);//  1/1v2
            v8 = v2;
            v3 = 1.0 / (v2 * 0.5 + 1.0);
            v6 = v3
                * exp(-1.26551223 + v3 * (1.00002368 + v3 * (0.37409196 + v3 * (0.09678418 + v3
                    * (-0.18628806 + v3 * (0.27886807 + v3 * (-1.13520398 + v3 * (1.48851587 + v3 * (-0.82215223 + v3 * (0.17087277))))))))));

            v7 = v8 * v8;
            if (v10 < 0.0)
                v4 = exp(v7) * -2.0 * input_value + v6;
            else
                v4 = exp(v7) * 2.0 * (1.0 - input_value) - v6;
            v5 = v4 * -1.25331414;
            v10 = v10 + v5;
        } while (fabs(v5) > 0.01);
        output_value = v10;

    }
    else
    {
        output_value = -5.0;
    }
    return output_value;
};