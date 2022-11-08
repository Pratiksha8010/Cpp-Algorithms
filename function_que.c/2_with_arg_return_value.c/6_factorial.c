#include<stdio.h>
#include<conio.h>
int main(){
  // error from vs code......!!!!!   
int fac(int n);
int n,ans;
printf ("enter a number......");
scanf("%d",&n);
ans=fac(n);
printf ("factorial=%d",ans);
}
int fac (int num){
int f=1;
for(  int i=1;i<=num;i++){
f=num*f;

}
return f; 

}