
#include <stdio.h>

int min(int num1,int num2)
{
    return(num1>num2) ?  num2:num1;
    
}
int main()
{
    int num1,num2,minimum;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    minimum=min(num1,num2);
    
    printf("The minimum  is %d",num1,num2,minimum);

    return 0;
}
