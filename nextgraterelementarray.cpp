#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
   }
   int ans[n];
   for(int i=0;i<n;i++)
   {
       bool flag=false;
       for(int j=i+1;j<n;j++)
       {
           if(arr[j]>arr[i])
           {
              ans[i]=arr[j];
              flag=true;
              break;
           }
       }
       if(flag==false)
       {
          ans[i]=-1;
       }
   }
   for(int i=0;i<n;i++)
   {
    cout<<ans[i]<<" ";
   }
   
}