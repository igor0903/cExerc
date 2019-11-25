#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>

int palindromo(char str[]){
int c = 0, i, a;

while (str[c] != '\0') {
  c++;
}

a = c - 1;

if(c % 2 == 0){
  for(i = 0; i < c/2; i++){
    if(str[i] == str[a]){
      a--;
    }
    else{
      return 0;
    }
  }
  return 1;
}
else{
  for(i = 0; i <= c/2; i++){
    if(str[i] == str[a]){
      a--;
    }
    else{
      return 0;
  }
  return 1;
}
}
}
int main(){

int i,n,x;

scanf("%d",&n);

char str[n];

for(i = 0; i < n; i++){

  scanf("%s",&str[i]);

}

x = palindromo(str);
printf("%d\n",x);
}
