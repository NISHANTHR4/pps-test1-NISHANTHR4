#include<stdio.h>
int input()
{
  int a;
  printf("enter a number-");
  scanf("%d",&a);
  return a;
}
int add(int a,int b)
{
  float sum;
  sum = a+b;
return sum;
}
void output(int a, int b,int c)
{
  printf("the sum  of two numbers %d and %d is %d",a,b,c);

}
int main()
{
  int num1,num2,sum;
  num1=input();
  num2=input();
  sum=add(num1,num2);
  output(num1,num2,sum);
  return 0;
}