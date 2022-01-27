#include<stdio.h>

void input(int *a,int *b,int *c)
{
  printf("Enter any three numbers to compare\n");
  scanf("%d%d%d",a,b,c);
}
int cmp(int a,int b,int c,int *large)
{
  
  if(a>=b && a>=c)
    *large = a;
  if(b>=c )
     *large= b;
  else
    *large= c;
  
  return *large;
}
void output(int num)
{
  printf("The largest number is %d\n",num);
  
}
void main()
{
  int cmpr;
  int  large,a,b,c;
  input(&a,&b,&c);
  cmpr=cmp(a,b,c,&large);
   output(cmpr);
}