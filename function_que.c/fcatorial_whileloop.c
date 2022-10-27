#include<stdio.h>
#include<conio.h>
int main(){
int n;
void factorial (int n);
printf ("enter a number....");
scanf ("%d",&n);
//printf ("enter limit.....");
//scanf("%d",&p);
factorial (n);


}
void factorial (int n){
    int f=1;
while(n>0){
f=f*n;
n--;

}

printf ("fac=%d",f);
}

