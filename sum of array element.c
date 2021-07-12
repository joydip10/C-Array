#include<stdio.h>
 
int main() {
   int i, arr[50], sum, num;
 
   printf("\nEnter no of elements :");
   scanf("%d", &num);
   printf("\nEnter the values :");
   for (i = 0; i < num; i++)
      scanf("%d", &arr[i]);
   sum = 0;
   for (i = 0; i < num; i++)
      sum = sum + arr[i];
   for (i = 0; i < num; i++)
      printf("\na[%d]=%d", i, arr[i]);
   printf("\nSum=%d", sum);
   return (0);
}