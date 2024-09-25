#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,unit,n;
    cin>>r>>unit>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int t=r*unit;
    int sum=0,c=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum>=t)
        {
            c++;
            break;
        }
        else{
            c++;
        }
    }
    cout<<c;
    return 0;
}