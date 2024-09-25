#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>v{9,2,3,4,5};
   for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

cout<<endl;

   // vector<int>::iterator it;
    for(auto it=v.begin();it!=v.end();++it){
        cout<<*it<<" ";
    }

cout<<endl;

/*for(int value: v){
      value++;
      //no change in actual value of v bcz all values are copied value not actual value
   }*/

//this print actual value of v increased by 1
   for(int &value: v){
      value++;
      
   }

   for(int value: v){
      //value++;
      //all number present in v incresed by 1
      cout<<value<<" ";
   }

cout<<endl;
   vector<pair<int,int>>vp{{2,3},{4,5},{6,8},{1,9}};
   for(pair<int,int> value:vp){
      cout<<value.first<<" "<<value.second<<endl;
   }

}