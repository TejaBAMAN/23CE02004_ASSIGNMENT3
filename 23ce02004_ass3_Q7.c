#include <stdio.h>

int main()
{
    float M, N, K, W, T;
    printf("enter the total marks obtained:\n");
    scanf("%f", &M);
    printf("enter the number of classes that you have attended:\n");
    scanf("%f", &N);
    printf("enter the total number of classes conducted:\n");
    scanf("%f", &K);
    W = N / K;
    T = M * W;
    if (T >= 90)
    {
        printf("final score=%f", T);
        printf("\nyour grade is EX");
    }
    else if (T >= 70 && T <= 79)
    {
        printf("final score=%f", T);
        printf("\nyour grade is B");
    }
    else if (T >= 80 && T <= 89)
    {
        printf("final score=%f", T);
        printf("\nyour grade is A");
    }
    else if (T >= 60 && T <= 69)
    {
        printf("final score=%f", T);
        printf("\nyour grade is C");
    }
    else if (T >= 50 && T <= 59)
    {
        printf("final score=%f", T);
        printf("\nyour grade is D");
    }
    else if (T >= 40 && T <= 49)
    {
        printf("final score=%f", T);
        printf("\nyour grade is P");
    }
    else
    {
        printf("final score=%f", T);
        printf("\nyour grade is F");
    }
    return 0;
}