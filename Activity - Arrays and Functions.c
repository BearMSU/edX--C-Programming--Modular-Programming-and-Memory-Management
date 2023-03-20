#include <stdio.h>

void reverseArray(int * arr); // Prototype

int main(void)
{
    int arr[6]; // Initialize Array
    int i;
    
    for(i=0; i<6; i++) // Loop to scan in user input into array
    {
        scanf("%d", &arr[i]);
    }
    
    reverseArray(arr); // Call function reverseArray
    
    for(i=0; i<6; i++) // Loop to print out the results of reverseArray function
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void reverseArray(int *ptr) // reverseArray function
{
    int swap; // Variable to hold place for integer being swapped
    
    swap = ptr[5]; // Swap 6 with 1
    ptr[5] = ptr[0];
    ptr[0] = swap;
    
    swap = ptr[4]; // Swap 5 with 2
    ptr[4] = ptr[1];
    ptr[1] = swap;
    
    swap = ptr[3]; // Swap 4 with 3
    ptr[3] = ptr[2];
    ptr[2] = swap;
}
