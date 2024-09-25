#include<iostream>
using namespace std;
class Test {
    public: 
    //declaration inside the class
    static void fun(
        // static int i;
        // cout << "fun() is static";//not allowed directly declaration in cpp
    );
};
//define outside the class
void Test::fun()
{
    cout<<"fun() is static";
}
int main()
{
    Test::fun();
    return 0;
}