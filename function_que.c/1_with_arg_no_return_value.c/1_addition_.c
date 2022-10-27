#include<stdio.h>
#include<conio.h>
int main(){
int a,b;                 //decleretion...............
void add (int a, int b);
printf ("enter two numbers...");
scanf("%d%d",&a,&b);
add (a,b);               //calling................



}
void add (int a, int b){
int c;                       //definetion................
c=a+b;
printf ("addition of two numbers......%d",c);



}