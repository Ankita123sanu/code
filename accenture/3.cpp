#include<iostream>
#include<bits/stdc++.h>
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
    int c=0;
    int sup=INT_MIN;
    for(int i=n-1;i>=0;i--)
    {
        while(arr[i]>sup)
        {
            sup=arr[i];
            c++;
        }
    }
    cout<<c<<endl;
}