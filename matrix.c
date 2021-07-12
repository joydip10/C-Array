    /*
    c[0][0]=a[0][0]*b[0][0]+a[0][1]*b[1][0];
    c[0][1]=a[0][0]*b[1][0]+a[0][1]*b[1][1];
    c[1][0]=a[1][0]*b[0][0]+a[1][1]*b[1][0];
    c[1][1]=a[1][0]*b[1][0]+a[1][1]*b[1][1];
    */
#include<stdio.h>
int main()
{
    int a[2][2]={1,2,3,4};
    int b[2][2]={5,6,7,8};
    int c[2][2],i,j,k,sum;
    int m,n,p;
    m=n=p=2;
    printf("MAtrix A \n");
    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B\n");
    for(i=0;i<p;i++){
        for(j=0;j<n;j++){
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                sum=0;
        for(k=0;k<p;k++){
                sum=sum+a[i][k]*b[k][j];
        }
        c[i][j]=sum;
        }
    }
    printf("Matrix C\n");
    for(m=0;m<2;m++){
        for(n=0;n<2;n++){
            printf("\t%d",c[m][n]);
        }
        printf("\n");
    }
    return 0;
}
