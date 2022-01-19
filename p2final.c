#include<stdio.h>
int input()
{
  int a;
  printf("Enter any  number\n");
  scanf("%d",&a);
  return a;
}
int add(int a , int b)
{
float sum;
sum=a+b;
return sum;
}
void output(int a, int b, int c)
{
 
printf("The sum of %d and %d is %d\n",a,b,c);

}
int main()
{
  int num1,num2;
  int sum,d;
  num1 = input();
  num2 = input();
   sum=add(num1,num2);
output(num1,num2,sum);
  return 0;
}