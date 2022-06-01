#include<stdio.h>
#include<math.h>
int main(){
    int ab,bc;
    scanf("%d%d",&ab,&bc);
    double hyp=sqrt(ab*ab*1.0+bc*bc*1.0);
    hyp/=2;
    double hab=ab*1.0/2;
    double angle=acos(hab/hyp);
    angle=angle*180/3.14;
    printf("%.0lf",angle);
    return 0;
}