#include<stdio.h>
#include<conio.h>
 int main(){
    int n,i,j,temp,arr[n];
    scanf("%d",&n);
    for(i=0;i<n;i++){
      
        scanf("%d ",&arr[i]);
    }
    for(i=0;i<n-1;i++){// for no of passes
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        
            }
        }
       for(j=0;j<n;j++){
         printf("%d ",arr[j]);
       }
    }
 
