int forte(char str[])
{
int i = 0,lm = 0, alg = 0, lg = 0;

while(str[i] != '\0'){
    if(str[i] >= 'A' && str[i] <= 'Z'){
        lg++;
    }
    if(str[i] >= 'a' && str[i] <= 'z'){
        lm++;
    }
    if(str[i] >= '0' && str[i] <= '9'){
        alg++;
    }
    i++;
}
if(i > 5 && lm > 0 && lg > 0 && alg > 0){
    return 1;
}
else
    return 0;
}
