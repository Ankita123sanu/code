#include<iostream>
using namespace std;
 //multiple inheritance
class Fruit {
    public:
    string name="Mango";
};
class Mango :public Fruit{
    public:
    int weight=300;
};
class Alphanso:public Mango{
    public:
    int sugarlevel=20;
};
int main(){
     cout<<"shubh"<<endl;
    Alphanso a;
    cout<<a.name<<" "<<a.weight<<" "<<a.sugarlevel<<endl;
    return 0;
}
