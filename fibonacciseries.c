#include<stdio.h>
#include<conio.h>
int fibo();
int main(){
    int n,i;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("fibonacci series: ");
    for(int i=0;i<n;i++){
        printf("%d ",fibo(i));
    }
    return 0;
}
int fibo(int n){
    if(n==0||n==1){
        return n;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}

