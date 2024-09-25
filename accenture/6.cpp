#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bool flag=false;
    vector<int>ans;
    for(int i=1;i<n;i++)
    {
        if(a[i-1]>a[i])
        {
            flag=true;
            ans.push_back(a[i-1]);
            
        }   
        else
        {
            continue;
        } //3 2 1
    }
    if(flag==true)
    {
        cout<<"yes"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
}