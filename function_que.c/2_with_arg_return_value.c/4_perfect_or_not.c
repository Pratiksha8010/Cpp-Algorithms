#include<stdio.h>
int main(){
int perfect (int n);
int n,ans;
printf ("enter a number....");
scanf ("%d",&n);
ans=perfect(n);
if(ans==1)
    printf ("number is perfect......");
    else
    printf ("number is not perfect......");
}
int perfect(int n){
 int sum=0;
for(int i=1;i<n;i++){
if (n%i==0){
sum=sum+i;
}
}
if (sum==n)
    return 1;
else 
return 0;

}




