#include<iostream>
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
    int c=0;
    for(int j=0;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            if(a[j]>a[k])
            {
                c++;
            }
        }
    }
    cout<<c;
}