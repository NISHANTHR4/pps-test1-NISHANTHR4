#include<stdio.h>

int input()
{
  int a;
  printf("Enter any number to be compared\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  int large;
  if(a>b && a>c)
  {
   large = a;
  }
  else if(a<b && b>c)
  {
    large = b;
  }
  else
  {
    large = c;
  }
  int num;
  num = large;
  return num;
  
}
void output()
{
  int num;
  printf("The largest number is %d\n",num);
}
void main()
{
  int num1,num2,num3,cmpr;
  num1=input();
  num2=input();
  num3=input();
  cmpr=cmp(num1,num2,num3);
  output();
}
