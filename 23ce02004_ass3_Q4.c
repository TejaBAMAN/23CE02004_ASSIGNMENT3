#include <stdio.h>
int main()
{
    double x1, x2, x3, y1, y2, y3;
    printf("Enter first point: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter second point: ");
    scanf("%lf %lf", &x2, &y2);
    printf("Enter third point: ");
    scanf("%lf %lf", &x3, &y3);

    if (((x2 - x1) / (y2 - y1) == (x3 - x2) / (y3 - y2)) || ((y2 - y1) / (x2 - x1) == (y3 - y2) / (x3 - x2)))
        printf("The 3 points lie on a line");
    else
        printf("The 3 points do not lie on a line");

return 0;
}