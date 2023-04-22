#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <io.h>


#define SIZE  512

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
    if (hFind != -1)
    {
        do
        {           
            strcpy(buf, "SCENARIO/");
            strcat(buf, FindFileData.cFileName);           
            if (remove(buf)) perror("remove failed");
 
        } while (FindNextFileA(hFind, &FindFileData));
    } 
        FindClose(hFind);
        return 0;
 }
    
int write_map_add_files(const char* map_name, const char* extensn)
{

    char map_path[MAX_PATH] = "MAPS/";
    char map_path1[MAX_PATH] = "";
    char fin_path[MAX_PATH];
    char fout_path[MAX_PATH];
    strcat(map_path, map_name);
    strcat(map_path, "/MAPUNITS/");

    strcat(map_path1,map_path);
    strcat(map_path1, extensn);
    WIN32_FIND_DATAA FindFileData;
    HANDLE hFind;
    FILE *fin, *fout;
    size_t num;
    char   buffer[SIZE];

    hFind = FindFirstFileA(map_path1, &FindFileData);
  
    if (hFind != -1)
    {
        do
        {
            strcpy(fin_path, map_path);
            strcat(fin_path, FindFileData.cFileName);
            strcpy(fout_path, "SCENARIO/");
            strcat(fout_path,FindFileData.cFileName);                   
            if ((fin = fopen(fin_path, "rb")) == NULL)
            {
                fprintf(stderr, "Missing file: %s\n", fin_path);
                fprintf(stderr, "Files neaded to launch a tactical scenario could not be found..\n");
                exit(5);
            }

            if ((fout = fopen(fout_path, "wb")) == NULL)
            {
                fprintf(stderr, "Could not open file.\n");
                return 2;
                fclose(fin);
            }

            while ((num = fread(buffer, sizeof(char), SIZE, fin)) > 0) 
            {
                fwrite(buffer, sizeof(char), num, fout);
            }

            fclose(fin);
            fclose(fout);    
        } while (FindNextFileA(hFind, &FindFileData));
    }

    FindClose(hFind);
    return 0;
}


