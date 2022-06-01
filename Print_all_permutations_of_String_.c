#include<stdio.h>
#include<string.h>
int main(){
    char arr[5];
    scanf("%s",arr);
    int l=strlen(arr);
    if (l==1){
        printf("%s",arr);
    }
    else if (l==2){
        int i,j;
        for (i=0; i<l; i++){
            for (j=0; j<l; j++){
                if (i!=j){
                    printf("%c%c
",arr[i],arr[j]);
                }
            }
        }
    }
    else if (l==3){
        int i,j,k;
        for (i=0; i<l; i++){
            for (j=0; j<l; j++){
                for (k=0; k<l; k++){
                    if (i!=j && i!=k && j!=k){
                        printf("%c%c%c
",arr[i],arr[j],arr[k]);
                    }
                }
            }
        }
    }
    else if (l==4){
        int i,j,k,m;
        for (i=0; i<l; i++){
            for (j=0; j<l; j++){
                for (k=0; k<l; k++){
                    for (m=0; m<l; m++){
                        if (i!=j && i!=k && i!=m && j!=k && j!=m && k!=m){
                            printf("%c%c%c%c
",arr[i],arr[j],arr[k],arr[m]);
                        }
                    }
                }
            }
        }
    }
    return 0;
}