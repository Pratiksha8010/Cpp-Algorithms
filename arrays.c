#include <stdio.h>
#include <conio.h>
int main (){
  
 int a [5];
 int num,u,ii;
 printf ("enter a limit");
 scanf ("%d",&num);
printf ("enter array elements ");
for (int i=0;i<=num;i++)
  scanf ("%d",&a[i]);

printf (" the array is ");
for( int i=0;i<num;i++)
printf ("%d",a[i]);

printf ("second arrays................");

 int b [5];
int num2;
printf ("\n enter a limit for secound array ");
scanf ("%d",&num2);
printf ("\n enter arrey elements");
for (int p=0;p<num2;p++)
scanf ("%d",&b[p]);
printf ("\n an array is");
for (int p=0;p<num2;p++)
printf  ("%d",b[p]);

if (a[i]==b[p]){
printf (" union elements==%d",u);
}
else 
{
printf ( "intersection elements==%d",ii);
}
 
return 0;

}