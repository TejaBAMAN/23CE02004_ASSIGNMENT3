#include<stdio.h>
int main() {
 int a,b,c,max;
 printf("Enter the value of three numbers :");
 scanf("%d %d %d", &a,&b,&c);
 max=a;
 if(b>max){
max=b;

 }
  if(c>max){
    max=c;
 }
 printf("The maximum among %d , %d and %d is : %d", a,b,c, max);



    return 0;

}