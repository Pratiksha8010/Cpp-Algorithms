#include <stdio.h>
int main(){
/*
//PRINT REVERS NUMBERS  678  
int n,d;
printf ("enter a number");
scanf("%d",&n);

while(n>0) {
d=n%10; // last digit deel

printf ("%d",d); //last digit print
n=n/10;// last digit remove hoeel
}
*/
/*
//SUM  OF DIGITS
int n,d,s=0;
printf ("enter a number");
scanf("%d",&n);
while( n>0){
d=n%10;
s=s+d;
n=n/10;

}
printf ("sum of num=%d",s);

*/


int num,d,rev=0;
printf (" enter a numbers :");
scanf ("%d",&num);

while (num>0){

d=num%10;
 num=num/10;
rev=rev*10+d;
}

printf ("sun of digit=%d",rev);









return 0;

}