/*
2. Design and develop an algorithm to find the reverse of an integer number NUM and check
whether it is PALINDROME or NOT. Implement a C program for the developed algorithm
that takes an integer number as input and output the reverse of the same with suitable
messages. Ex: Num: 2014, Reverse: 4102, Not a Palindrome.
*/

#include <stdio.h>

void main()
{
    int num, num_copy, rev = 0, rem;
    printf("Enter the number\n");
    scanf("%d", &num);
    num_copy = num;
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        rev = rev * 10 + rem;
    }
    printf("Reversed Number is %d\n", rev);
    if (rev == num_copy)
    {
        printf("%d is palindrome\n", num_copy);
    }
    else
    {
        printf("%d is not palindrome\n", num_copy);
    }
    return;
}