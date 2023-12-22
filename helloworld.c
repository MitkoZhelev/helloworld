#include <stdio.h>
#include <windows.h>

int main(){
    if (!OpenClipboard(NULL))
    {
        return 1;
    }
    HANDLE data = GetClipboardData(CF_TEXT);
    if (data == NULL)
    {
        CloseClipboard();
        return 1;
    }
    printf("Contents: %s\n",data);
    return 0;

}