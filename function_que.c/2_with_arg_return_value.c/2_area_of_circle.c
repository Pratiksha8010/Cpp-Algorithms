#include<stdio.h>
#include<conio.h>
int  main(){
float r,a;
float circle (float r);
printf ("enter redius............");
scanf ("%f",&r);
  a=circle (r);

printf ("area of circle....%f",a);

}
float circle (float r){
   float a= 3.14*r*r;
   return  a;
}