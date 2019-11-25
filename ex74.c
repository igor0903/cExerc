#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int algum_digito(char str[]){

int i = 0;

while(str[i] != '\0'){
  if(isdigit(str[i]) != 0){
    return 1;
  }
  i++;
}
return 0;
}

int main(){
char s[] = "nao tem numero";
int x;

x = algum_digito(s);
printf("%d\n",x);
}
