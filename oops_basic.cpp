#include<iostream>
using namespace std;
class Hero{
    //properties
    private:
    int health;

    public:
    char level;//it is public so either it has been accessed outside the class or inside the class it shows no error
   //access private functions health inside the class
    /*void print(){
        cout<<level<<endl;//shows no error
    }*/

    Hero(){
        cout<<"constructor called"<<endl;
    }

    void print(){
        cout<<health<<endl;//shows no error
    }

    int gethealth(){
        return health;
    }
   char getlevel(){
        return level;
    }

 void sethealth(int h){
        health=h;
    }
 void setlevel(char ch){
        level=ch;
    }
};
int main(){

 /*     //static allocation 
   Hero s;
   s.sethealth(80);
   s.setlevel('B');
   cout<<"level is "<<s.level<<endl;
   cout<<"health is "<<s.gethealth()<<endl;

   //dynamically allocation 
   Hero *a=new Hero;
   //(*a).sethealth(70);
   //(*a).setlevel('C');
   a->sethealth(70);
   a->setlevel('C');

   cout<<"level is "<<(*a).level<<endl;
   cout<<"health is "<<(*a).gethealth()<<endl;

   cout<<"level is "<<a->level<<endl;
   cout<<"health is "<<a->gethealth()<<endl;



   /* //creation of object
    Hero ramesh;
    ramesh.sethealth(70);//but outside the class private health shows error
  // ramesh.setlevel('A'); ///it is public so no error
    ramesh.level='N';
    cout<<"health is: "<<ramesh.gethealth()<<endl;
    cout<<"level is: "<<ramesh.getlevel()<<endl;

   cout<<"level is level is: "<<ramesh.level<<endl;*/

//object created statically
Hero ramesh;// by default ramesh.hero()
cout<<"Hii"<<endl;
//Hero ramesh;
cout<<"Hello"<<endl;

}
