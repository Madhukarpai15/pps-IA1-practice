#include<stdio.h>

int input()
{
  int a;
  printf("Enter the number: ");
  scanf("%d",&a);
  return a;
}

int find_sum(int *a,int *b)
{
  int c;
  c=*a+*b;
}

void output(int a,int b,int c)
{
  printf("The sum of %d and %d is %d",a,b,c);
}

int main()
{
  int x,y,sum;
  x=input();
  y=input();
  sum=find_sum(&x,&y);
  output(x,y,sum);
  return 0;
}