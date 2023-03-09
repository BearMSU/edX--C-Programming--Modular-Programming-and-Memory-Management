#include <stdio.h>
int main(void)
{
    int n, i, total, num;
    char type;
    int totalC = 0;
    int totalI = 0;
    int totalD = 0;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        scanf("%d %c", &num, &type);
        if(type == 'i')
        {
            totalI = num * sizeof(int);
        }
        else if(type == 'c')
        {
            totalC = num * sizeof(char);
        }
        else if(type == 'd')
        {
            totalD = num * sizeof(double);
        }
        else
        {
            printf("Invalid tracking code type");
            return 0; // Need this return 0 or else the program will continue after the invalid entry
        }
    }
    total = totalI + totalC + totalD;
    printf("%d bytes", total);
    return 0;
}
