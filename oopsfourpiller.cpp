#include<iostream>
using namespace std;

class Animal {
    private:
    int age;
    int weight;
    
    public:
    void eat()
    {
        cout<<"Eating"<<endl;
    }
    int getAge()
    {
        //both are correct
        return this->age;
        // return age;
    }
    void setAge(int age)
    { 
       this->age=age;
    }
};
int main()
{
    cout<<"heloo world"<<endl;
    Animal *a=new Animal();
    a->eat();
    a->setAge(20);
    cout<<"age is: "<<a->getAge();
}