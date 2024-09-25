#include<bits/stdc++.h>
using namespace std;

void printvec(vector<string>v)
{
    cout<<"size: "<<v.size() << endl;
    for(int i=0;i<v.size();i++){
     cout<<v[i];
    }
}

int main(){
   vector<string>s;
   int n;
    cin>>n;
   
   for(int i=0;i<n;i++){
     string st;
    cin>>st;
     s.push_back(st);
   }
    /*
   cout<<"size: "<<n;
   cout<<endl;
   for(int i=0;i<n;i++){
      cout<<s[i]<<" "<<endl;
   }
   */
printvec(s);        
}