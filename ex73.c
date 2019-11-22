#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int todos_letras(char str[]){

int i = 0;

while (str[i] != '\0') {
  if(isalpha(str[i]) == 0){
      return 0;
}
i++;
}
return 1;
}
int main(){

int x;
char s[100];

//for(int j = 0; j < 5;j++){
scanf("%s",&s[0]);
//}
x = todos_letras(s);

switch (x) {

  case 0:
  printf("tem coisa alem de letra ai moral\n");
  break;

  case 1:
  printf("boa moral, so letra na parada\n");
  break;

  default:
  printf("fizeste merda brother\n");
  break;
}
}
