#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main(){
    int r;
    float peri;
    printf("enter r:");
    scanf("%d", &r);
    peri = 2*PI*r ;
    printf("perimeter of circle:%.2f", peri);
    getch();
}