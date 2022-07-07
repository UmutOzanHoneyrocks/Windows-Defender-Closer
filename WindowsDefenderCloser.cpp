#include <Windows.h>
#include <iostream>
int main() {
    const int IGNORINGCHAR = 256;
    bool failure = false;
    system("color a");
    do {
        
        int cho;
        std::cout << "Welcome to the WindowsDefenderEditor" << std::endl;
        std::cout << "What did you want[" << std::endl;
        std::cout << "1=Closes WindowsDefenderCompletly(Not Recomended)" << std::endl;
        std::cout << "2=Opens WindowsDefenderCompletly" << std::endl;
        std::cout << "3=Just Deactivates WindowsDefender(You can open it what ever you want)(Recomended)" << std::endl;
        std::cout << "]" << std::endl;
        std::cin >> cho;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(IGNORINGCHAR,'\n');
            failure = true;
        }
        if (cho == 1) {
            HKEY hkey;
            DWORD dwDisposition;
            if (RegCreateKeyEx(HKEY_LOCAL_MACHINE,
                TEXT("SYSTEM\\CurrentControlSet\\Services\\SecurityHealthService"),
                0, NULL, 0,
                KEY_WRITE, NULL,
                &hkey, &dwDisposition) == ERROR_SUCCESS) {
                DWORD dwType, dwSize;
                dwType = REG_DWORD;
                dwSize = sizeof(DWORD);
                DWORD rofl = 4;
                RegSetValueEx(hkey, TEXT("Start"), 0, dwType, (PBYTE)&rofl, dwSize); // does not create anything
                RegCloseKey(hkey);
                system("shutdown -r ");
                // etc..
            }

        }
        if (cho == 2) {
            HKEY hkey;
            DWORD dwDisposition;
            if (RegCreateKeyEx(HKEY_LOCAL_MACHINE,
                TEXT("SYSTEM\\CurrentControlSet\\Services\\SecurityHealthService"),
                0, NULL, 0,
                KEY_WRITE, NULL,
                &hkey, &dwDisposition) == ERROR_SUCCESS) {
                DWORD dwType, dwSize;
                dwType = REG_DWORD;
                dwSize = sizeof(DWORD);
                DWORD rofl = 2;
                RegSetValueEx(hkey, TEXT("Start"), 0, dwType, (PBYTE)&rofl, dwSize); // does not create anything
                RegCloseKey(hkey);
                system("shutdown -r ");
                // etc..
            }
        }
        if (cho == 3) {
            HKEY hkey;
            DWORD dwDisposition;
            if (RegCreateKeyEx(HKEY_LOCAL_MACHINE,
                TEXT("SYSTEM\\CurrentControlSet\\Services\\SecurityHealthService"),
                0, NULL, 0,
                KEY_WRITE, NULL,
                &hkey, &dwDisposition) == ERROR_SUCCESS) {
                DWORD dwType, dwSize;
                dwType = REG_DWORD;
                dwSize = sizeof(DWORD);
                DWORD rofl = 3;
                RegSetValueEx(hkey, TEXT("Start"), 0, dwType, (PBYTE)&rofl, dwSize); // does not create anything
                RegCloseKey(hkey);
                system("shutdown -r ");
                // etc..
            }
        }
        else {
            std::cout << "You type wrong int number pls try again" << std::endl;
            failure = true;
        }

    } while (failure);


   


}