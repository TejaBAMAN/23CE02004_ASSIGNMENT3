#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, temp, digits = 0, dividend, r, square, power = 1, part1, part2;
    printf("enter a number:");
    scanf("%d", &n);
    square = n * n;
    temp = square;
    for (; square > 0;)
    {
        dividend = square / 10;
        square = dividend;
        digits++;
    }
    r = digits / 2;
    for (int i = 1; i <= r; i++)
    {
        power = power * 10;
    }
    part1 = temp / power;
    part2 = temp % power;
    if (part1 + part2 == n)
    {
        printf("given number %d is a Kaprekar number", n);
        abort();
    }
    r = r + 1;
    power = 1;
    for (int i = 1; i <= r; i++)
    {
        power = power * 10;
    }
    part1 = temp / power;
    part2 = temp % power;
    if (part1 + part2 == n)
    {
        printf("given number %d is a Kaprekar number", n);
    }
    else
        printf("given number %d is not a Kaprekar number", n);

    return 0;
}