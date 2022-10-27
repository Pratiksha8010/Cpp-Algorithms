#include <stdio.h>
#include <conio.h>
//int main (){

 /*   
int num1,num2,s;
printf ("enter  first value : ");
scanf ("%d",&num1);
printf ("enter secound value :");
scanf ("%d",&num2);
int*fptr=&num1;
int*sptr=&num2;
s=*fptr + *sptr ;
printf ("sum of two pointer------>%d",s);
*/


//-----------ADRESS OF ELEMENTS----------
/*
int arr [5]={ 2,3,4,5,6};

 //int  *ptr = &arr;

for (int i=0;i<=5;i++){
 int  *ptr = &arr;
    printf ("\n %d",&arr[i]);
}
*/
//--------------------DICREMENT/ INCREMENT--------------------

/*
int tiksha [3]={3,5,8};
//int ptr2=&tiksha;   // INCREMENT KELIA LIA
for (int j=3;j>=0;j--){ // FOR(INT J=1;J<=3;J++) ;
    int ptr2=&tiksha;
printf ("%d\n ",&tiksha[j]);

}
*/
//------------pointer with arrays--------------

//eeeeerrrrrorrr
/*
 int b=0;
int arr [5]={2,5,8,9,6};
for (int i=1;i<=5;i++){
int *ptr=&arr;

if (b>arr[i]){
printf ("%d",b);

}
else {
printf ("%d ",b);


}


}

*/

/*eeeeeeeeerrrrrrroooooooorrrrrr

int  k (int*ptr1, int*ptr2){
int sum;

sum = k( *ptr1 + *ptr2) ;

printf ("sum=%d",sum);
return (sum);
};


int main(){

int a=5,b=6,k;
//printf ("enter value of a ");
//scanf ("%d",&a);
//printf ("enter value of b");
//scanf ("%d",b);
int *ptr1=&a;
int *ptr2=&b;
k=(*ptr1,*ptr2);
printf ("value of a and b= %d %d",k);
*/


/*
void sw (int *x, int *y){
int k;
k=*x;
*x=*y;
*y=k;


}

int main (){
int a ,b;
printf ("enter numbers");
scanf("%d%d",&a,&b);
sw (&a,&b);
printf ("%d \n %d",a,b);
*/



return 0;
}
