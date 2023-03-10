#include <stdio.h>
int main()
{
    char type;
    int num;
    int size;
    scanf("%c %d", &type, &num);
    
    if(type == 'i')
    {
        size = sizeof(int)*num;
        printf("%d KB and %d B", (size/1000), (size%1000));
    }
    else if(type == 'd')
    {
        size = sizeof(double)*num;
        printf("%d MB and %d KB and %d B", size/1000000, (size%1000000)/1000, size%1000);
    }
    else if(type == 's')
    {
        size = sizeof(short)*num;
        printf("%d MB and %d KB and %d B", size/10000, (size%1000000)/1000, size%1000);
    }
    else if(type == 'c')
    {
        size = sizeof(char)*num;
        printf("%d KB and %d B", size/1000, size%1000);
    }
    return 0;
}
