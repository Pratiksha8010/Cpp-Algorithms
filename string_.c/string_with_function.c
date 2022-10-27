#include<stdio.h>
#include<conio.h>
void str (char str[]){
int i=0;
while(str[i]=!"\0"){

printf ("%s",str[i]);
i++;

}

}



int main(){
char tiksha[]={'t','i','k','s','h','a','\0'};
str(tiksha);
    return 0;
}