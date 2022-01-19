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
  if(a>b && a>c)
  {
    printf("%d is greater\n",a);
  }
  else if(a<b && b>c)
  {
    printf("%d is greater\n",b);
  }
  else
  {
    printf("%d is greater\n",c);
  }
}
void main()
{
  int num1,num2,num3,cmpr;
  num1=input();
  num2=input();
  num3=input();
  cmpr=cmp(num1,num2,num3);
}
