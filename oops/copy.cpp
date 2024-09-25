#include <iostream>
#include <string>
using namespace std;
class A 
{                                                     h
public:
    int a;
    string B;
    A() 
    {
        a = 20;
        B = "hello";
        cout << a << " " << B;
    }
    A(const A& ref) 
    {
        a = ref.a;
        B = ref.B;
        cout << a << " " << B;
    }
};
int main() 
{
    A r;       
    A r2 = r;  
    return 0;
}