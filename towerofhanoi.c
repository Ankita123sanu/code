#include<stdio.h>
#include<conio.h>
int toh(int n,char beg,char aux,char end);
int toh(int n,char beg,char aux,char end){
    if(n<=0){
       printf("illegal entry");
    }
    else if(n==1){
        printf("disc move from %c to %c \n",beg,end);
    }
    else{
        toh(n-1,beg,end,aux);
        toh(1,beg,aux,end);
        toh(n-1,aux,beg,end);
    }

}
int main(){
    int n;
    char a,b,c;
    printf("enter number of disc: ");
    scanf("%d",&n);
    toh(n,'a','b','c');
}