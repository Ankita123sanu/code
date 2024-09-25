// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,u;
    cin>>n;
    cin>>r;
    cin>>u;
    int arr[n]; 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int tf=u*r;
    int c=1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum>=tf)
        {
            cout<<c<<endl;
            break;
        }else{
            c++;
        }
    }
    return 0;
}