#include <stdio.h>
int sumOfDigits(int);
int main(void)
{
    int n, sum;
    scanf("%d", &n);
    sum = sumOfDigits(n);
    printf("%d \n", sum);
    
}
int sumOfDigits(int n)
{
    int p, total;
    if(n == 0)
    {
        return 0;
    }
    else
    {
        p = n%10;
        total = p + sumOfDigits(n/10);
        return total;
    }
}
