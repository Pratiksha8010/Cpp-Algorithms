# include <stdio.h>
int main ()
{
int a,b;
printf("enter  number");
scanf ("%d",&a);
//if a=7;
//b=a++ + ++a + --a;
// a=a++; //o/p=7
//printf ("%d",a);
//b=++a;// o/p=8
//b=--a; // o/p=6
//a=--a;
//b=b--;
//printf (" %d",a);
//printf (" %d",b);
b= ++a - a++ + ++a;
printf ("%d",b);

return 0;


}