#include<stdio.h>
int main(){
int a,b;
void max (int a ,int b);
printf ("enter two numbers.....");
scanf("%d%d",&a,&b);
max (a,b);

}
void max (int a, int b)
{
if (a>b){

    printf ("a is greter number........");
}
else
printf ("b is greter number........");


}