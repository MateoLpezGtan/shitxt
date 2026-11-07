#include <stdio.h>
#include <ncurses.h>

int
main(int argc, char *argv[])
{
  FILE *fp;
  fp = fopen(argv[argc-1], argv[argc-2]);

  initscr();

  if (fp != NULL)
    printw("[+] File %s created/read successfully!\n", argv[argc-1]);
  else
    printw("[!] File %s couldn't be created/read\n", argv[argc-1]);

  if(getch())
    endwin();


  return 0;
}
