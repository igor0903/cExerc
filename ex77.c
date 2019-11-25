#include<stdio.h>
#include<stdlib.h>

int calc(char str[]){

int res;

if(str[1] == '+'){

  res = (str[0] - '0') + (str[2] - '0');

  return res;
}
if(str[1] == '-'){

  res = (str[0] - '0') - (str[2] - '0');

  return res;
}
else{

  res = (str[0] - '0') * (str[2] - '0');

  return res;
}
}

int main(){

int x;

char str[] = "2+3";

x = calc(str);

printf("%d\n",x);
}
