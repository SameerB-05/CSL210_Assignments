// Data Structures Assignment 1
// Name: Sameer Vasant Badami
// Enrollment number: BT23ECE108

// Question 2

#include <stdio.h>
#include <string.h>
#include <limits.h>


int fibonacci_call_count(int n, int *calls) 
{
    (*calls)++;

    if (n <= 0)
        return -1;
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;

    return fibonacci_call_count(n - 1, calls) + fibonacci_call_count(n - 2, calls);
}


int main()
{
    int n=0;
    printf("Enter n (natural number): ");
    scanf("%d", &n);

    int calls = 0;
    fibonacci_call_count(n, &calls);
    
    printf("Number of calls to fibbonaci function for n=%d is: %d\n", n, calls);
    return 0;
}