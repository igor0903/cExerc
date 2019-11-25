int filtrar_positivos(int vec[], int size)
{
int veres[size],i=0,j=0;

for(i=0;i<size;i++){
    if(vec[i]>0){
        veres[j]=vec[i];
        j++;
    }
}
for(i=0;i<j;i++){  
    vec[i]=veres[i];
}
vec[j] = '\0';
return j;
}
