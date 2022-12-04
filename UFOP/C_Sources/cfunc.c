#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

libr()
{	
	_cprintf("");
	//sprintf(""," ");
}

int delete_old_scenario(void)
{
    WIN32_FIND_DATAA FindFileData;
    HANDLE hFind;
    char buf[MAX_PATH];
    hFind = FindFirstFileA("SCENARIO/*.*", &FindFileData);
 
        do
        {
            
            strcpy(buf, "SCENARIO/");
            strcat(buf, FindFileData.cFileName);
            if (remove(buf)) perror("remove failed");
        } while (FindNextFileA(hFind, &FindFileData));
        FindClose(hFind);
        return 0;
 }
    
int write_map_add_files(char *map_name, char *filename)
{
    printf("map_name %s\n", map_name);
    printf("filename %s\n", filename);




    return 0;
}









    /*

    register int done;
    struct ffblk FindData;
    char FileName[80];
    char dest[80];

    done = _findfirst("SCENARIO/*.*", &FindData);
    if (done != -1)
    {
        do
        {
            strcpy(FileName, "SCENARIO/");
            
            printf("file %s\n", dest);
            if (remove(dest) == -1)
                printf("Could not delete %s\n", FindData.ff_name);
        } while (!_findnext(done, &FindData));
        _findclose(done);
    }
    return 0;
    */

