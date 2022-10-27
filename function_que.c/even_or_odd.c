#include<stdio.h>
int main(){
int a;
void eveno (int a);
printf ("enter a number......");
scanf("%d",&a);
 eveno (  a);
}
void eveno (int a){
if (a%2==0)
printf ("number is even.......");
else 
printf ("number is odd.........");

}
