#include<iostream>
using namespace std;
//multilevel inheritance
class Tiger{
    public:
    int weight;
    Tiger(){
        weight=30;
    }
};
class Lion{
    public:
    int weight;
    Lion(){
        weight=40;
    }
};
class Liger:public Tiger,public Lion{
    public:
    string name;
    Liger(){
        name="pookie";
    }
};
int main(){
    cout<<"shubhhhhhhhh"<<endl;
    Liger l;
    cout<<l.Tiger::weight<<endl;
    cout<<l.Lion::weight<<endl;
    cout<<l.name<<endl;
    return 0;
}