#include<iostream>
using namespace std;

class Animal {
    public:
    int age;
    int weight;

    void eat() {
        cout<<"Eating Eating"<<endl; 
    }
};

class Dog:public Animal {

};
int main()
{
    cout<<"hello world"<<endl;
    Dog d1;
    d1.eat();//inherit animal class ie pare  nt class in dog class
    return 0;
}
