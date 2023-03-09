#include<stdio.h>
int main()
{
    int n, i;
    int total= 0;
    
    scanf("%d",&n);
    
    for(i=0; i<n; i++)
    {
        int count;
        char type;
        //take input count and type
        scanf("%d %c", &count, &type);
        
        // total bytes will be added with count and size of int that is 4
        if(type=='i')
        {
            total = total + sizeof(int)*count;
        }
        // total bytes will be added with count and size of long that is 8
        else if(type=='d')
        {
        total = total + sizeof(double)*count;
        }
        // total bytes will be added with count and size of char that is 1
        else if(type=='c')
        {
            total = total + sizeof(char)*count;
        }
        //else exit program using return
        else
        {
            printf("Invalid tracking code type");
            return 0;
        }
    }
    //display final bytes
    printf("%d bytes",total);
    return 0;
}
