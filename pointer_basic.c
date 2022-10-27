
#include <stdio.h>
#include <conio.h>
int main(){


  int a=5;
  int*b=&a;
printf (" \nvalue of a=%d",a);
// display value of a=5    
printf ("\nvalue of &a=%d",&a);
//display value of address of a=34728293
printf ("\nvalue of *b=%d",*b);
//when we write *b then display value of variable not address value 
printf ("\nvalue of &b=%d",&b);
//*b ha pointer &a cha address stor krto but to pn memory til aka address vr krto,
//( tyasathi dethil new address aahe) mhanum &b cha new address show kela jato 

//---------CONCEPT OF NULL POINTER------------ 
int *b2= NULL;
printf ("\n value of *b2=%p ",*b2);

  return 0;  
}
