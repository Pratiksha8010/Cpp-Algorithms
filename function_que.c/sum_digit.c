#include <stdio.h>
int main(){
int num;
void digit (int num);
printf ("enter a number.......");
scanf("%d",&num);
digit (num);
} 
void digit (int num){
int d,sum=0;
while(num>0){
d=num%10;
num=num/10;
sum=sum+d;
}
printf ("sum of digits........%d",sum);


}