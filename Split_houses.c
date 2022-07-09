#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    char str[a];
    scanf("%s",str);
    int c=0,i;
    for (i=0; i<a; i++){
        if (str[i]=='.'){
            c+=1;
        }
    }
    if (c>a/2){
        printf("YES
");
        for (i=0; i<a; i++){
            if (str[i]=='.'){
                printf("B");
            }
            else{
                printf("H");
            }
        }
    }
    else{
        printf("NO");
    }
    return 0;
}