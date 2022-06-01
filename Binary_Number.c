#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    if (a==1){
        printf("0
1");
    }
    else if (a==2)
    {
        printf("00
01
10
11");
    }
    else if (a==3){
        int r=pow(2,3),i,j;
        for (i=0; i<r; i++){
            int arr[3]={0,0,0},t=i,j=2;
            while (t>0){
                int rem=t%2;
                arr[j--]=rem;
                t/=2;
            }
            for (j=0; j<3; j++){
                printf("%d",arr[j]);
            }
            printf("
");
        }
    }
    else if (a==4){
        int r=pow(2,4),i,j;
        for (i=0; i<r; i++){
            int arr[4]={0,0,0,0},t=i,j=3;
            while (t>0){
                int rem=t%2;
                arr[j--]=rem;
                t/=2;
            }
            for (j=0; j<4; j++){
                printf("%d",arr[j]);
            }
            printf("
");
        }
    }
    return 0;
}