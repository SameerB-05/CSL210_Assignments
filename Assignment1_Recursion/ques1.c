// Data Structures Assignment 1
// Name: Sameer Vasant Badami
// Enrollment number: BT23ECE108

// Question 1

#include <stdio.h>
#include <string.h>
#include <limits.h>

void find_second_largest(int arr[], int n, int index, int *largest, int *second_largest)
{
    if(index == n)
        return;
    
    if(arr[index] > *largest)
    {
        *second_largest = *largest;
        *largest = arr[index];
    }
    else if(arr[index] > *second_largest && arr[index] != *largest)
        *second_largest = arr[index];
    
    find_second_largest(arr, n, index+1, largest, second_largest);
}


int main()
{
    int n=0;
    int arr[n];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: \n");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    
    if (n < 2) 
        printf("Array must have at least two elements.\n");
    else
    {
        int largest = INT_MIN; 
        int second_largest = INT_MIN;

        find_second_largest(arr, n, 0, &largest, &second_largest);
        printf("The second largest element in the array is: %d", second_largest);
    }

    return 0;
}