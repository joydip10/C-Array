#include<stdio.h>
int main()
{
    int n,i,j,t,max;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
        printf("Max = %d\n",max);
        for(i=0;i<n;i++){
            {
                if(a[i]>a[i+1]){
                    t=a[i];
                    a[i]=a[i+1];
                    a[i+1]=t;
                }
            }
        }
        printf("Medium = %d\n",a[n/2]);
    return 0;
}
