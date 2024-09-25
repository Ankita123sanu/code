#include<iostream>
using namespace std;
int print_array(int arr[],int n){
    for(int i=0;i<n;i++){
       cout<<arr[i];
       
     }
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    cout<<print_array(arr,n);

}