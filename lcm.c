#include <stdio.h>

int lcm(int,int);     //function declaration
void main()
{
    int a,b,i,result;
    printf("Enter two numbers to find lcm: ");
    scanf("%d%d",&a,&b);
    result=lcm(a,b);      ///function calling
    printf("\nthe lcm of %d and %d is %d.",a,b,result);
}
int lcm(int a,int b)
{
    static int common=1;
    if(common%a==0 && common%b==0)
    return common;
    common++;
    lcm(a,b);     //function recuration
    return common;
}
