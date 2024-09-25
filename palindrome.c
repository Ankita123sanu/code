#include<stdio.h>
#include<conio.h>
int palindrome(int n){
    int s=0,temp,r;
        temp=n;
    while(n>0){
    r=n%10;
    s=r+(s*10);
    n=n/10;
    }
    if(temp==s){
      printf("number is palindrome\n");
      //return 1;
    }
    else{
        printf("not palindrome\n");
       // return 0;
    }

}
int main(){
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
   /*if(palindrome(n)==1){
        printf("palindrome\n");
    }
    else{
        printf("not palindrome\n");
    }*/
    palindrome(n);
    return 0;
}



