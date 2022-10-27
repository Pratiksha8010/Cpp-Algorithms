#include<stdio.h>
#include<conio.h>
int main(){
int a,b,c;
int  add (int a, int b);
printf ("enter two numbers..........");
scanf("%d%d",&a,&b);
c= add(a,b);
printf ("addition ......%d",c);
}

int add (int a, int b)
{
int c=a+b;
return c;


} 