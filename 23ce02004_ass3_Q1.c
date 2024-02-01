#include <stdio.h>
int main(){
int integer;
printf("enter integer :");
scanf("%d", &integer);
if (integer > 0)
{
    printf("positive integer");
}
else if (integer < 0)
{
    printf("negative integer");
}else{
    printf("zero");
}
return 0;


}