#include<stdio.h>
#include<conio.h>
int main(){
void d_sum ();
}
void d_sum ()
{
int n,d,sum;
printf ("enter a number....");
scanf("%d",&n);
while (n>0){
d=n%10;
n=n/10;
sum=sum+d;
}
printf ("sum of digit....%d",sum);
}