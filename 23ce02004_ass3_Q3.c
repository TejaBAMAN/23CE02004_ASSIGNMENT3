#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a,b,c:");
    scanf("%d,%d,%d", &a,&b,&c);
    if ((a>0)&&(b>0)&&(c>0)&&(a+b>=c)&&(c+a>=b)&&(c+b>=a))
    {
        printf("a,b,c are sides of a triangle");
    }else{
        printf("a,b,c are not the sides of a triangle");
    }
    return 0;

    
}