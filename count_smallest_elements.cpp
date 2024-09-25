#include<iostream>
using namespace std;
int main(){
    int arr[50],i,n,x,count=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>x;
    for(i=0;i<n;i++){
        if(arr[i]<=x){
            cout<<arr[i]<<" ";
          count++;
         
        }
    }
   cout<<count;
   
}

