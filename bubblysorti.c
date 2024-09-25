#include<stdio.h>
#include<conio.h>
int bubblesort(int arr[],int n);
int bubblesort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
            }
        }
    }
    printf("sorted array is:");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
int main(){
    int n,arr[200],i;
    printf("enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
   }
   bubblesort(arr,n);
   return 0;
}