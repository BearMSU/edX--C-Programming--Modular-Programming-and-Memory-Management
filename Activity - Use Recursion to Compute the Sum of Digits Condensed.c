#include <stdio.h>

int sumOfDigits(int);

int main(void) 
{	
	int n, sum;   
	scanf("%d", &n);
	sum = sumOfDigits(n);
	printf("%d", sum);
	return 0;
}

int sumOfDigits(int d) 
{
	if (d<10)
  {
	    return d;
  }
	else
  {
	    return (d%10 + sumOfDigits(d/10));
  }
}
