#include <stdio.h>
int min(int, int);
int main(void)
{
    int count, minNum, input;
    scanf("%d", &count);
    scanf("%d", &input);
    minNum = input;
    // loop to accept all numbers
    for(int i=1; i<count; i++)
    {
        //call min function
        if(min(minNum, input) == 0)
        {
            minNum = input;
        }
        // a
        scanf("%d", &input);
    }
    //print min number
    printf("%d", minNum);
    return 0;
}
