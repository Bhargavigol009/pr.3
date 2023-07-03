#include<stdio.h>
#include<conio.h>

void main(){
int count=0;
int n;
clrscr();
printf("enter any number; ");
scanf("%d",&n);

do{
 n/=10;
 ++count;
}while(n !=0);
  printf("number of digits: %d", count);


getch();
}
