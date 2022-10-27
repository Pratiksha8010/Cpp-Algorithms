#include<stdio.h>
int main(){
float r;
void circle (float r);
printf ("enter a redius....");
scanf("%f",&r);
circle (r);

}
void circle (float r){
float a;
a=3.14*r*r;
printf ("area of circle......%f",a);

}