#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    double a, x;
    char c;
    
    for(int i=0;i<n;i++)
    {
        scanf("%lf %c", &a, &c);
        if(c=='m')
        {
            x = a*3.2808;
            printf("%lf ft", x);
        }
        else if(c=='g')
        {
            x = a*0.002205;
            printf("%lf lbs", x);
        }
        else if(c=='c')
        {
            x = (1.8*a) + (32);
            printf("%lf f", x);
        }
        printf("\n");
    }
    return 0;
}
