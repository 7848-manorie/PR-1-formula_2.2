#include <stdio.h>
#include <conio.h>
void main()
{
  int p, r, n;
  float si;
  // clrscr();
  printf("enter principle amount:");
  scanf("%d", &p);
  printf("enter rate of interest:");
  scanf("%d", &r);
  printf("enter time per annum:");
  scanf("%d", &n);
  si = p * r * n / 100;
  printf("simple interest is:%.2f", si);
  getch();
}