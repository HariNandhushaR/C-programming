//A wildlife simulation models a rabbit population using the Fibonacci sequence. The population value for a month is calculated from the values of the two preceding months.
//Given an integer N, calculate the Nth Fibonacci number using recursion. Complete the calculateRabbitPopulation function.
//Input Format
//
//- A single line containing an integer N.
//  Output Format
//- Print a single integer representing the Nth Fibonacci number.
//  Constraints
//- 0 ≤ N ≤ 40
//  Sample Test Case 1
//  Input:
//  5
//  Output:
//  5
//  Explanation:
//  The Fibonacci sequence starts as: 0, 1, 1, 2, 3, 5, 8...
//  The 5th Fibonacci number (starting from the 0th index) is 5.
//  Sample Test Case 2
//  Input:
//  0
//  Output:
//  0
//  Explanation: The 0th Fibonacci number is 0.//

#include <stdio.h>

// start your solution

int calculateRabbitPopulation(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    return calculateRabbitPopulation(n - 1) +
           calculateRabbitPopulation(n - 2);
}

// end your solution

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d\n", calculateRabbitPopulation(n));

    return 0;
}
