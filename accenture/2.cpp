#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>9)
    {
        //  temp=stoi(s);
        if(n%2==0)
        {
            n=floor((n-2)/2);
        }
        else
        {
            n=floor(n/2);
        }
    }
    cout<<n<<endl;
}