#include<stdio.h>
int main ()
{
    /*
*
* *
* * *
int num;
printf (" enter a number :");
scanf("%d",&num);

for ( int i=1;i<=num;i++){

for (int j=1;j<=i;j++){

printf ("*");
}
printf ("\n");
}
*/
 /*

* * * * *
* * * *
* * *
* * 
*
int num=5;
for ( int i=num;i>=1;i-- ){
for (int j=1;j<=i;j++){
printf("*");

}
printf("\n");
}
*/

/*


*
* *
* * *
* * * *

int num ;
printf ("entur a number ");
scanf(" %d",&num);

for (int i=1;i<=num;i++){

for (int j=1;j<=i;j++){
printf ("*");

}

printf ("\n");
}
*/

//******
//******
//******
//******
//******
/*
int num;
printf ("enter a number");
 scanf ("%d ",&num);
for (int i=1; i<=num;i++){

for (int j=num;j>=1;j--){
printf ("*");
}

printf (" \n");

}
*/
/*
//----------NEW LOGIC---------------
int num; 
printf (" enter a number :");
scanf ("%d",&num);
for ( int i=1;i<=num;i++){
for (int j=1;j<=num;j++){
printf("*");

}


printf ("\n");

}

*/
/*
                                                   
     int row,col;                                            // 2 4 6 8 10
     for ( row=1;row<=5;row++){                              //3 6 9 12 15
for (col=1;col<=5;col++){                                    //4 8 12 16 20 
printf ("%d\t",col*row);                                     //5 10 15 20 25  


}
printf("\n");
     }                                                                



*/
/*

//  *
//  * *
//  * * *
//  * *  * 

int row,col;
for (row=5;row<=10;row++){
for (col=5;col<=row;col++){
printf ("*");


}
printf ("\n");
}
*/
/*
// * * * *
// * * * 
// * *
// *

int row,col;
for (row=5;row>=1; row--){
for (col=1;col<=row;col++){

    printf ("*");
}
printf ("\n");
}



*/
/*  

*****
*****
*****
*****
*****
int row,col;
for (row=1;row<=5;row
for (col=1;col<=5;col++){
printf ("*");

}
printf ("\n");

}


*//*
//    ++++*
//    ++**
//    +***
//    *****
 int row ,col;
 for (row=1;row<=4;row++){
for (col=4;col>row;col--){
printf (" ");


}
for (col=1;col<=row;col++){
printf ("*");

}
printf ("\n");
 }  
*/
int row,col;
for (row=7;row>=1;row--){
    for(col=7;col>row;col--){
  printf (" ");


    }
   for (col=1;col<=row;col++){
    printf ("*");
   } 
   printf ("\n");
}



  return 0;
}