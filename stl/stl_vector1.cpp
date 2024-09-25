#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int> v){
    cout<<"size: "<<v.size( ) << endl;
    for(int i=0;i<v.size();i++){
        //v.size() -> O(1)
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
   vector<int> v /*= {1,2,3,4,5}*/;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x) ;
        //v.push_back(12);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" "<<endl;
      
    }
     v.push_back(999);
     v.pop_back();
     
    printvec(v);
   
}


