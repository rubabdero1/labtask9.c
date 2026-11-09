
#include <stdio.h>

// Addition function
int add(int a, int b)
{
    return a + b;
}

// Multiplication function
int multiply(int a, int b)
{
    return a * b;
}

// Maximum function
int findMax(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

// Master function using function pointer
int compute(int a, int b, int (*operation)(int, int))
{
    return operation(a, b);
}

int main()
{
    int num1, num2;
    int sum, product, maximum;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    sum = compute(num1, num2, add);

    product = compute(num1, num2, multiply);

    maximum = compute(num1, num2, findMax);

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);
    printf("Maximum = %d\n", maximum);

    return 0;
}

