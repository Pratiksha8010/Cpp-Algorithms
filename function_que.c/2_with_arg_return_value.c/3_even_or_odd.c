#include<stdio.h>
#include<conio.h>
int evenodd (int n);
int main(){
//int evenodd (int n);
int n,ans;
printf ("enter a number....");
scanf("%d",&n);
ans= evenodd (n);
if(ans==1)
printf ("number is enven");
else
printf ("number is odd");

}
int evenodd(int n){
if(n%2==0)
return 1;
else
return 0;

}

