//Write a programe to find if a given number is neutral or not using a ladder if else.

#include<stdio.h>
#include<conio.h>

void main(){
int a;
clrscr();
printf("Enter any number:");
scanf("%d",&a);
if(a<0){
printf("The number is negative");
}else if(a==0){
printf("The number is neautral");
}else{
printf("the number is positive");
}
getch();

}