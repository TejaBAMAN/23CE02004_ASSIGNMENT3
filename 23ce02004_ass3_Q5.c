#include <stdio.h>

int main()
{
    int days;
    printf("enter the number of days that you are late to return the book:");
    scanf("%d", &days);
    if (days <= 5)
        printf("the fine is 1 rupee");
    else if (days >= 6 && days <= 10)
        printf("the fine is 2 rupees");
    else if (days >= 11 && days <= 30)
        printf("the fine is 5 rupees");
    else
        printf("your membership is cancelled");
    return 0;
}