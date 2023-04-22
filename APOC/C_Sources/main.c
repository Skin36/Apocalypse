
#include <windows.h>
#include <stdio.h>
#include <tchar.h>
int load_exe(TCHAR ufPath[],char *selector);



void _tmain(int argc, TCHAR* argv[])
{   
    DWORD exit_code; 
    char selector[10] = "0";// first start

    while (1)
    {
        exit_code = load_exe(_T("UFOP.exe"), selector);

        /*
        0,1,5-full exit
        2-return from tacp game
        3-restart
        4-load scenario
        51-lose screen
        52-win screen

        for tact  save_game_num + 20
        */

        printf(" exit_code %d.\n", exit_code);
        switch (exit_code)
        {
        case 0:
        case 1:
        case 5:
            exit(1);
        case 3:
            *selector = "0";
            break;
        case 2:
        case 4:
            _itoa(exit_code, selector, 10);
            exit_code = load_exe(_T("TACP.exe"), selector);
            switch (exit_code)
            {
            case 0:
                exit(2);
            case 2:
                _itoa(exit_code, selector, 10);
                break;
            default:
                exit(0);
            }
            break;
        case 51:
            // load video
            exit(1);
        case 52:
            // load video
            exit(1);

        default:
            exit(0);
        }
    }

    // Close process and thread handles.  
}





int load_exe(TCHAR ufPath[],char *selector)
{
    //TCHAR ufPath[] = _T(fname);
    DWORD exit_code;
    STARTUPINFO si1;
    PROCESS_INFORMATION pi1;
    ZeroMemory(&si1, sizeof(si1));
    si1.cb = sizeof(si1);
    ZeroMemory(&pi1, sizeof(pi1));
    // Start the child process. 
    //char cmdArgs[] = "UFOP.exe name@example.com";
   
    if (!CreateProcess(ufPath,   // No module name (use command line)
        selector,        // Command line
        NULL,           // Process handle not inheritable
        NULL,           // Thread handle not inheritable
        FALSE,          // Set handle inheritance to FALSE
        0,              // No creation flags
        NULL,           // Use parent's environment block
        NULL,           // Use parent's starting directory 
        &si1,            // Pointer to STARTUPINFO structure
        &pi1)           // Pointer to PROCESS_INFORMATION structure
        )
    {
        printf("CreateProcess failed (%d).\n", GetLastError());
        return 1;
    }
    WaitForSingleObject(pi1.hProcess, INFINITE);
    GetExitCodeProcess(pi1.hProcess, &exit_code);
    CloseHandle(pi1.hProcess);
    CloseHandle(pi1.hThread);

    return exit_code;
}