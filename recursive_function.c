#include<stdio.h>
/* ----------POWER OF NUMBERS-----------------
int rec (int num,int p){

if (p==0)
return 1;   
return rec (num, p-1)*num;
};

int main(){
int num,p,a;
printf ("enter number" );
scanf ("%d",&num);
printf ("enter power of number");
scanf ("%d",&p);
 a= rec(num,p);
 printf ("%d",a);

 return 0;   
}
*/
/* ---------------1TO 50 NUMBERS----------------
int rec(int num){
if (num<50){

printf ( "\n %d",num);
rec (num+1);
}
};

int main(){
int num,n;
printf ("enter a number:");
scanf ("%d",&num);
n=rec(num);
 printf(" %d",n);

return 0;
}

*/
int sum (int num,int p){
if (num==0)
return 1;

 printf ("%d",num);
 
return sum (num,num-1+num);

};


int main(){
int num,p=5,k;
printf ("enter a number:");
scanf ("%d",&num);
k=sum (num,p);
 printf(" %d",k );
 

return 0;
}












