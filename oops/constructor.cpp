#include<iostream>
using namespace std;
class X{
    // point(){
    //     cout<<"constructor called";
    // }
    public:
    int c;
    X(int d){
       this->c=d;
    }
};
int main() {
    X a=10;
    X *b=new X(10);
    // a.x=10;
    cout<<a.c;
    cout<<endl;
    cout<<b->c;
    return 0;
}

