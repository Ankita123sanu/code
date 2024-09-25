#include<iostream>
using namespace std;
void printdivisorsn(int n);
void printdivisorse(int n);
void printdivisorsme(int n);
  int main(){
      int n;
      cout<<"enter a number\n";
      cin>>n;
     printdivisorsn(n);
     cout<<endl;
     printdivisorse(n);
     cout<<endl;
     printdivisorsme(n);
     cout<<endl;
}
void printdivisorsn(int n)
{
    for(int i=1;i<=n;i++)
    if(n%i==0)
    cout<<i<<endl;
}
void printdivisorse(int n)
{
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
            if(i!=n/i)
            cout<<n/i<<endl;
        }
    }
}
void printdivisorsme(int n)
{
    int i;
    for(i=1;i*i<n;i++)
    if(n%i==0)
    cout<<i<<endl;
    for( ;i>=1;i--)
    if(n%i==0)
    cout<<n/i<<endl;
}
