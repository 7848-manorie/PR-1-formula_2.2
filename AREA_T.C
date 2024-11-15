#include<stdio.h>
#include<conio.h>
void main(){
  int b,h;
  float area;
  clrscr();
  printf("enter the base of triangle:");
  scanf("%d",&b);
  printf("enter the height:");
  scanf("%d",&h);
  area=0.5*b*h;
  printf("area of triangle:%.2f",area);
  getch();
}