#include<stdio.h>
int fun(int n)
{
   
    int i=0;
    if(n>1)
    fun(n-1);
    for(i=0;i<n;i++)
    printf("*");
    
}
int main()
{
  printf("%d",fun(4));
  return 0;
}