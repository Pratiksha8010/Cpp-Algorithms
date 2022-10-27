#include<stdio.h>
#include<conio.h>
int main(){

void sumdigit ();
sumdigit();
}


void sumdigit (){
int d,n,sum=0;
printf ("\n enter a number....");
scanf ("%d",&n);

while(n>0){
d=n%10;
n=n/10;
sum=sum+d;
}
printf ("\n sum of digit.....%d",sum);
}



