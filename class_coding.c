#include<stdio.h>
int main (){

 /*    
 // -----------------DIFERENSE BETWEEN TWO NUMBERS-------------------------------
 int num1,num2,num3;  
printf ("enter a number :");
scanf ("%d",&num1);

printf ("enter a number :");
scanf ("%d",&num2);

printf ("enter num:3");
scanf("%d",&num3);


if (num2-num3==num1||num3-num2==num1){
printf ("num1 is middel number between num2 and num3.........");

}
else {
printf ("num1 is not middal number between num2 and num3........");
}
*/

//------------------------------- FOR LOOP IN NUMBRES PRINTS--------------------------
/*

int i;
for (i=1;i<=5;i++){
printf ("\n %d",i);
printf ("\n");
}
*/


/*
int j;
for (j=5;j>=1;j--){
printf ("\n %d",j);
printf ("\n");
}
*/

/*
for ( int k=1;k<=10;k=k+1){


printf ("\n %d",k*5);
}
*/
//--------------------------SUM OF NUMBERS IN FOR LOOP-----------------------------
/*
for ( int s=1;s<=10;s=s+2){
    printf ("\n %d",s);


}
printf ("\n odd numbers");
*/
/*
int e=0,o=0;
for (int v=1;v<=10;v++){


if (v%2==0)
e=e+v;

else 
o=o+v;

}
printf ("sum of even numbers=%d\n ",e);
printf ("sum of odd numbers= %d",o);
*/

/*
int num;
printf ("enter a numbers for limit");
scanf ("%d",&num);
printf ("even numbers");
for (int i =0;i<=num;i=i+2){
printf ("\n %d",i);


}
*/

/*
int num,sum;
//printf("enter number for limint ");
//scanf("%d",num);
printf ("evens numbers");
for (int i=1;i<=10;i++)
{
if (i%2==0)
printf (" %d \n",i);
}
printf ("odd numbers");
for (int j=1;j<=10;j=j+2)
{
printf ("\n %d",j);


}

*/
/*
int i;
i=1;
while (i<=10){
printf ("%d \n ",i);
i++;
}
*/
/*
int i;
i=10;
while (i>=1){
printf ("%d \n ",i);
i--;
}
*/

/*
int num;
//printf ("enter a number of limit");
//scanf ("%d",num);
int i=1;
while (i<=10){

if(i%2==0)
printf (" %d",i);

i++;

}
*/
/*

int i;
i=1;
while(i<=10){
if (i%2==!0){
printf ("%d \n ",i);
}
i++;
}
*/
/*
//111111111111111111
int num,i;
printf ("enter a number");
scanf("%d",&num);
for ( i=1;i<num;i++){
if (num%i==0){
printf ("%d\t",i);

}


}
*/
//11111
/*
int n ;
printf ("enter a limit");
scanf("%d",&n);
for (int i =1;i<=n;i++){

    printf ("\n squareof =%d=%d and =%d =%d",i,i*i,i,i*i*i);

}
*/
/*
//222222
//MULTIPLICATION OF NUMBER
int n;
printf ("enter a limit ");
scanf("%d",&n);
for(int i=1;i<=10;i++){
printf ("\n%d",i*n);
}
*/

/*
//WHICH  NUMBER DIVICIABLE BY 3 SUM

int n,sum=0;
printf ("enter  a number");
scanf("%d",&n);
for(int i=1;i<=n;i++){
if (i%3==0){

sum=sum+i;


printf ("\n%d",sum);

}
*/

//BASE AND POWER
//eeeeeee
/*
int x,n,a=1;
printf ("enter value of base and power");
scanf("%d%d",&x,&n);
for(int i=1;i<=n;i++){
a=a*x;


}
printf ("base to power=%d",a);

*/




//RENCH OF NUMBER AND SUM
/*
int x,y,a=0;
printf ("enter a first number ");
scanf("%d",&x);
printf ("enter last number");
scanf("%d",&y);
for (int i=x;i<=y;i++){
a=a+i;


}
printf (" sum=%d",a);
*/
/*
//PRINT NUMBER BETWEEN X TO Y
int x,y;
printf ("enter a number x and y");
scanf("%d%d",&x , &y);

for (int i=x;i<=y;i++){
printf ("%d",i);

}
*/
return 0;

}

