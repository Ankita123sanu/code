#include<iostream>
using namespace std;
int main()
{
    int n,i;
    float arr[500],median,sum=0.0,mean,mode;
    cout<<"enter the size of array\n";
    cin>>n;
    cout<<"numbers are\n";
    for(i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
       sum=sum+arr[i];
    }
   mean=sum/n;
   cout<<"mean= "<<mean;
   cout<<endl;
   cout<<"arrange the numbers in assendin order\n";
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   if (n%2!=0)
   median = arr[n/2];
   else if(n%2==0)
   median = (arr[(n/2)-1]+arr[n/2])/2;
   cout<<"median= "<<median\n;
   
   mode=(3*median)-(2*mean);
   cout<<"mode= "<<mode;
   return 0;
}
