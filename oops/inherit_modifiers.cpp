#include<iostream>
using namespace std;

class Animal {
    public:
    int age=20;
    int weight;
    void eat() {
        cout<<"Eating Eating"<<endl; 
    }
    // protected:
    // int age=20;
    // int weight;
};
//here age is accesssed inside inherited class 
class Dog:protected Animal {
    public:
    void print(){
        this->age=30;
        cout<<age<<endl;
    }
};
    
    class cat:public Animal {
    public:
    void print(){
        // age=66;
        cout<<this->age<<endl;
    }
   };
   class gun:private Animal {
    public:
    void print(){
        this->age=55;
        cout<<this->age<<endl;
    }
    };
int main()
{
    cout<<"hello world"<<endl;
    Dog d1;
    cat c1;
    gun g1;
    // d1.age=20;
    // cout<<d1.age<<endl;
    d1.print();
    c1.print();
    g1.print();
    // cout<<d1.age<<endl;
    c1.eat();//inherit animal class ie pare  nt class in dog class
   // d1.eat();//incorrect kyunki public class ko publically inherit kar sakte hai child class me bas
    // g1.eat();
    return 0;
}
