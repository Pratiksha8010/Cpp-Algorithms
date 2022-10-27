#include<stdio.h>
#include<conio.h>
int main(){
int a,b;
void sawp (int a, int b);
printf ("enter two nnumbers........");
scanf ("%d%d",&a,&b);
sawp (a,b);

}
void sawp (int a,int b){
int c;
c=a;
a=b;
b=c;
printf ("swaping values.....%d %d",a,b);


}