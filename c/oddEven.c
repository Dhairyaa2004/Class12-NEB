/*calculating weather number is odd or even without using modulas (%) operator*/


#include <stdio.h> 


int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n%2==0)
    printf("Number is even");
    else
    printf("Number is odd");
    return 0;
}