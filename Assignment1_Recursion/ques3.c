// Data Structures Assignment 1
// Name: Sameer Vasant Badami
// Enrollment number: BT23ECE108

// Question 3

#include <stdio.h>
#include <string.h>
#include <limits.h>


int cnt_ones(int arr[], int n, int index)
{
    if(index == n)
        return 0;
    
    return (arr[index] == 1) + cnt_ones(arr, n, index+1);
}

int main()
{
    int n=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array (ones and zeroes): \n");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    
    printf("Number of ones in the array: %d", cnt_ones(arr, n, 0));

    return 0;
}