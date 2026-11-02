#include <stdio.h>
#include <string.h>

int
main(int argc, char *argv[])
{
  FILE *fp;
  fp = fopen(argv[argc-1], argv[argc-2]);

  if (fp != NULL)
    printf("[+] File %s created/read successfully!\n", argv[argc-1]);
  else
    printf("[!] File %s couldn't be created/read\n", argv[argc-1]);

  return 0;
}
