#include<stdio.h>

int input_num()
{
  int a;
  printf("Enter the number: ");
  scanf("%d",&a);
  return a;
}

int find_sum(int *a,int *b,int *c)
{
  *c=*a+*b;
}

void output(int a,int b,int c)
{
  printf("The sum of %d and %d is %d",a,b,c);
}

int main()
{
  int x,y,sum;
  x=input_num();
  y=input_num();
  find_sum(&x,&y,&sum);
  output(x,y,sum);
  return 0;
}