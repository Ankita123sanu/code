#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,a[50],b,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[n]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++)
        {
            if(a[j]>a[i]){
            b=a[j];
            a[i]=a[j];
            a[i]=b;
        }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}