#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
            sum += 2*i-1;
    }
    printf("Sum of the first %d odd numbers = %d\n", n, sum);
    printf("n^2 = %d\n", n*n);
    if (sum == n*n)
     {
        printf("The sum of the first %d odd numbers equals n^2\n", n);
     }
    else
     {
        printf("The sum of the first %d odd numbers does not equal n^2\n", n);
      }
    return 0;
}
