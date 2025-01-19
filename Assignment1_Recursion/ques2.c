// Data Structures Assignment 1
// Name: Sameer Vasant Badami
// Enrollment number: BT23ECE108

// Question 2

#include <stdio.h>
#include <string.h>
#include <limits.h>


int fibonacci_call_count(int n)
{
    if(n==0 || n==1)
        return 1;
    
    int left = fibonacci_call_count(n-1);
    int right = fibonacci_call_count(n-2);
    return left + right;
}


void fibonacci(int n, int a, int b) {
    // Base case: If n reaches 0, return
    if (n == 0) {
        return;
    }
    
    // Print the current Fibonacci number
    printf("%d ", a);
    
    // Recursive call for next Fibonacci numbers
    fibonacci(n - 1, b, a + b);
}


int main()
{
    int n=0;
    printf("Enter n (natural number): ");
    scanf("%d", &n);

    printf("Number of calls to fibbonaci function for n=%d is: %d\n", n, fibonacci_call_count(n));
    printf("Fibonacci series up to %d terms: ", n);
    fibonacci(n, 0, 1);
    return 0;
}