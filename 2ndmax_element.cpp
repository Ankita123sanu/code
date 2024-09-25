#include<iostream>

using namespace std;
int main(){
  int n;
  cin>>n;
   int mx=-99999999;
   int arr[n];
    
   
   for(int i=0;i<n;i++)

   {
    cin>>arr[i];
   }
   for(int i=0;i<n;i++)
   {
      mx=max(mx,arr[i]);
      
   }
   //cout<<mx<<endl;
   int mxi=-19999999;
   for(int i=0;i<n;i++){
    if(arr[i]!=mx){
       //cout<<arr[i]<<" ";
       mxi=max(mxi,arr[i]);
    }
   
   }
    cout<<mxi<<endl;
   
  return 0;
}
