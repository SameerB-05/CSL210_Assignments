// Data Structures Assignment 1
// Name: Sameer Vasant Badami
// Enrollment number: BT23ECE108

// Question 4

#include <stdio.h>
#include <string.h>
#include <limits.h>


int strcmp_recursion(char *str1, char *str2) {
    // Base case: both strings are empty (both null-terminated)
    if (*str1 == '\0' && *str2 == '\0') {
        return 0;
    }
    
    // If characters are different, return their difference
    if (*str1 != *str2) {
        return *str1 - *str2;
    }
    
    // If characters are the same, recursively check the next character
    return strcmp_recursion(str1 + 1, str2 + 1);
}


int main()
{
    char str1[100], str2[100];

    // Take input from the user
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Call the recursive strcmp simulation
    int result = strcmp_recursion(str1, str2);
    printf("%d", result);
    return 0;
}