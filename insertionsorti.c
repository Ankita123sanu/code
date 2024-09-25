#include<stdio.h>
#include<conio.h>
int insertionsort(int arr[],int n);
int main(){
    int i,n,arr[800];
    printf("enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    insertionsort(arr,n);
    return 0;
}
int insertionsort(int arr[],int n){
    int i, current, j;
    for (i = 1; i < n; i++) 
    {
        current = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > current) 
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    
    printf("sorted array is: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}