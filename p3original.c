#include<stdio.h>

int input_n()
{
  int a;
  printf("Enter the count of numbers: ");
  scanf("%d",&a);
  return a;
}

int sum_n(int n)
{
  int i, sum=0;
  i=1;
  for(i=1;i<=n;i++)
  {
    sum+=i;
  }
  return sum;
}

void output(int n, int sum)
{
  printf("The sum of %d numbers is: %d",n,sum);
}

int main()
{
  int n,sum;
  n=input_n();
  sum=sum_n(n);
  output(n,sum);
  return 0;
}