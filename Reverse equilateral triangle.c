#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<=5;i++)
    {
    
        for(j=0;j<i;j++)
        
        {
        printf("  ");
        }
        for(k=11;k>=2*i+1;k--)
        {
        printf("* ");
        }
        
    
    printf("\n");
}
}
