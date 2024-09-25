#include<iostream>
using namespace std;
int main(){
    int n,pos;
    cout<<"no of elements in an array: ";
    cin>>n;
    int i;
    int arr[n];
    cout<<"elements of array: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter a position you want to delete an array: ";
    cin>>pos;
    if(pos>n+1){
        cout<<"not possible\n";
    }
  else
  {
    for(i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
  }
  for(i=0;i<n-1;i++){
    cout<<arr[i]<<" ";
  }
}


