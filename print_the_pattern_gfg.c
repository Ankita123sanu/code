#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=n;j>0;j--)
        {
          for(k=i;k>0;k--)
          {
              printf("%d",j);
          }
        }
        printf("\n");
        
    }
    return 0;
}