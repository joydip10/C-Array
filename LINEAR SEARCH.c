#include<stdio.h>
int main()
{
    int a[10],i,j,ch,n,lo;

    while(1)
    {
        printf("array size \n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
        printf("ur desire number\n");
        scanf("%d",&j);
        for(i=0;i<n;i++){
            if(a[i]==j)
                break;
        }
        if(i==n)
            printf("not found\n");
        else
            printf("position %dth\n",i+1);
    }
    return 0;
}
