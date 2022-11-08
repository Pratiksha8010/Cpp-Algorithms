#include<stdio.h>
#include<conio.h>
int main(){
int n,f;
printf ("enter a number......");
scanf ("%d",&n);
f=fac(n);

}

int fac (int n ){
int f;
for(int i=1;i<=n;i++){

    f=f*i;
}
printf ("factorial......%d",f);

}




