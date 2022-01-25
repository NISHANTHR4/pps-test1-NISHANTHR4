#include<stdio.h>

void input(int *a)
{
  printf("Enter any number to compare\n");
  scanf("%d",a);
}
int cmp(int a,int b,int c,int large)
{
  int num;
  if(a>=b && a>=c)
  {
  
 large = a;
  }
   if(b>=c && b>=a)
  {
  
 large= b;
  }
  if(a<=c && c>=b)
  {
  large= c;
  }
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
  int num,num1,num2,num3;
  int  large,a,b,c;
  input(&a);
  input(&b);
  input(&c);
  cmp(a,b,c,large);

  
  output();
}