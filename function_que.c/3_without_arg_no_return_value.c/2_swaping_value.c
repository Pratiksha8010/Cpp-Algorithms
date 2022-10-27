#include<stdio.h>
#include<conio.h>
int main(){
void swap ();
    swap();

}

void swap (){

int a,b,c;
printf ("enter two numbers.....");
scanf ("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf ("\n value of a is........%d",a);
printf ("\n value of b is........%d",b);

}