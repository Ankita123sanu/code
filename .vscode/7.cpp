#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char c1,c2;
    cin>>c1>>c2;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==c1)
        {
            s[i]=c2;
        }
        else if(s[i]==c2)
        {
            s[i]=c1;
        }
    }
    cout<<s;
    return 0;
}