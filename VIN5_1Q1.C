//write a programe to find the minimum number from the given 2 number using if else.

#include<stdio.h>
#include<conio.h>

void main(){
int a=8;
int b=3;
clrscr();
printf("Enter a value of the first number: %d\n",a);
printf("Enter a value of the second number: %d\n",b);
if(a<b){
printf("The minimum value is %d\n",a);
}else{
printf("The minimum value is %d\n",b);
}

getch();

}