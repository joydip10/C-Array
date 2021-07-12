#include<stdio.h>
int ar[2000000];
int main()
{
    int i,temp,swap,n,k;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&ar[k]);

    }

    while(1){
        swap=0;
        for(i=0;i<n;i++){
            if(ar[i]>ar[i+1])
            {
                temp=ar[i];
                ar[i]=ar[i+1];
                ar[i+1]=temp;
                swap=1;
            }
        }
        if(swap==0)
            break;
    }
    for(i=0;i<n;i++){
        printf("%d\n",ar[i]);
    }
    return 0;
}
