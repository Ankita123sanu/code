#include<stdio.h>
#include<conio.h>
int binarysearchrec(int [],int,int,int);

void main(){
    int a[100],n,x,result,i;
    printf("enter the no of elements in array\n");
    scanf("%d",&n);
    printf("elements are\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element u have to search\n");
    scanf("%d",&x);
    result=binarysearchrec(a,x,0,n-1);
    if(result==-1){
        printf("element is not present.\n");
    }
    else 
    printf("element is found in %d position\n",result+1);

}
int binarysearchrec(int a[],int x,int s,int e){
    int mid;
    if(s>e){
        return -1;
    }
    mid=(s+e)/2;
   if(x==a[mid]){
      return mid;
   }
   else if(x>a[mid]){
      return binarysearchrec(a,x,mid+1,e);
   }
   else{
      return binarysearchrec(a,x,s,mid-1);
   }
}

