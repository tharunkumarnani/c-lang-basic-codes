#include <stdio.h>
int main()
{
  int i,j,sum=0,n,rem;
  printf("enter any digit:");
  scanf("%d",&n);
  j=n;
  for(i=0;i<n;)
  {
  rem=n%10;
  n=n/10;
  sum=sum+rem;
  }
  printf("sum of the digits of %d is:%d :-)",j,sum);
  return 0;
}
