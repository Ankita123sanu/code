#include<iostream>
#include<map>
using namespace std;
void printele(map<int,string>&m){
    
     for(auto &p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size();
}

int main(){
    map<int,string>m;
    m[1]="bcd";//0(log(n))
    m[5]="cdc";
    m[3]="acd";
    m.insert({4,"dfg"});
    
   auto it = m.find(3);
   if(it!=m.end());
   m.erase(it);
   m.clear();
   printele(m); 
   /* if(it==m.end()){
        cout<<"no value"<<endl;
    }
    else {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }*/
  //  printele(m);
  /*  map<int,string>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first <<" "<<(*it).second<<endl;
    }*/
/*   cout<<endl;
     map<string,int>mp;
    mp["dcf"]=5;
    mp["bcd"]=1;
    mp["acd"]=3;
    mp.insert({"dfg",4});
    map<int,string>::iterator i;
    for(auto i=m.begin();i!=m.end();i++){
        cout<<(*i).second <<" "<<(*i).first<<endl;

    }*/

}