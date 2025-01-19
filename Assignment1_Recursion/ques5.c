// Data Structures Assignment 1
// Name: Sameer Vasant Badami
// Enrollment number: BT23ECE108

// Question 4

#include <stdio.h>
#include <string.h>
#include <limits.h>


int getLastTwoDigProd(int n)
{
    int last = n%10;
    n = n/10;
    int secondLast = n%10;
    return last*secondLast;
}

int bear(int n)
{
    if(n>42)
    {
        printf("Entered condition >42 : %d\n", n);
        if(n%2==0 && bear(n/2))
        {   
            printf("Entered condition 2 : %d\n", n);
            return 1;
        }
        else if (n%3==0 || n%4==0)
        {
            if(getLastTwoDigProd(n) != 0)
            {
                printf("Entered condition 3 or 4 : %d\n", n);
                if(bear(n-getLastTwoDigProd(n)))
                    return 1;
            }   
        }
        else if (n%5==0 && bear(n-42))
        {
            printf("Entered condition 5 : %d\n", n);
            return 1;
        }
    }

    else if(n==42)
    {
        printf("Entered condition == 42 : %d\n", n);
        return 1;
    }
    else if(n<42)
    {
        printf("Entered condition <42 : %d\n", n);
        return 0;
    }
    return 0;
}

int main()
{
    int n=0;
    printf("Enter initial number of teddy bears: ");
    scanf("%d", &n);
    printf("Teddy bears game result: %d", bear(n));

    return 0;
}