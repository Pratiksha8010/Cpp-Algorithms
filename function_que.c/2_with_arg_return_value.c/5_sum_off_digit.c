#include<stdio.h>
#include<conio.h>


int main(){

int sum_digit (int n);
int n,s;
printf ("enter a number.....");
scanf("%d",&n);
s=sum_digit(n);
printf ("sum of digit.....%d",s);
}
int sum_digit (int n){
int d, s=0;
while (n>0){
d=n%10;
n=n/10;
s=s+d;
}
return s;
}

