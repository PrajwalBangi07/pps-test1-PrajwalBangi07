#include<stdio.h>
int input()
{
  int a,b,c;
  printf("Enter a number\t");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{   if(a>b && a>c)
{
  printf("A is greater\n");
} 
else if (b>a && b>c )
{
  printf("B is greater\n");
}
else if (c>a && c>b)
{
  printf("C is greater");
}
else if (a==b && b==c)
{
  printf("All numbers are equal");
}
else if (a==b && b>c)
{
  printf("A and B are equal and greater than C");
}
else if (a==c && a>b)
{
  printf("A and C are equal and greater than B");
}
else if (b==c && b>a)
{
  printf("B and C are equal and greater than A");
}
else{
  printf("Test");
}
}
 int main()
  {
    int a,b,c;
    a=input();
    b=input();
    c=input();
    cmp(a, b, c);
    return 0;
  }
  
  
