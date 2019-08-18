#include <stdio.h>
#include <string.h>
#include <conio.h> 
void main()
{
  char a[1000], b[1000];
  clrscr();
  printf("Enter the first string\n");
  gets(a);
 
  printf("Enter the second string\n");
  gets(b);
 
  strcat(a, b);
 
  printf("String obtained on concatenation: %s\n", a);
 
  getch();
}