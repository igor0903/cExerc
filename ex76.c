#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int decimal(char str[]){

int valor = atoi(str);

return valor;
}

int main (){

int x;
char s[] = "1234";

x = decimal(s);

printf("%d\n",x);  
}
