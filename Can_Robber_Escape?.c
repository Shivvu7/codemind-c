#include<stdio.h>
int main()
{
    int n,a[100],i,o=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==1)
        {
            o++;
        }
    }
    if(o<=2)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
}