#include<stdio.h>

int main()
{
    /* Step 0 */
    int numbers[3];

    numbers[0] = 56;
    numbers[1] = 25;
    numbers[2] = 87;

    int *px;

    /* Step 1 */
    px = numbers;
    printf("First value of px = %d\n", px);
    printf("First value of variable pointed by px = %d\n", *px);

    /* Step 2 */
    px = &numbers[0];
    printf("Second value of px = %dn", px);
    printf("First value of variable pointed by px = %d\n", *px);

    /* Step 3 */
    px = &numbers[1];
    printf("Third value of px = %d\n", px);
    printf("Third value of variable pointed by px = %d\n", *px);

    /* Step 4 */
    px = &numbers[2];
    printf("Last value of px = %d\n", px);
    printf("Last value of variable pointed by px = %d\n", *px);

    return 0;
}
