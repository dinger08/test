#include <iostream>
#include <string>

using namespace std;

class Human {  //base class
private: //encapsulation
    string ind;

    int occu=0;
protected:
    int indA;
    int fly;
public:
    Human(string name, int age) {
    ind = name;
    indA = age;
    fly = 0;
    }

    void getHuman() {  //first commit all variables to be usable in method
    cout << "Name is " << ind << " and age " << indA << endl;
    cout << occu<< endl;
    }

    void occuCount(){
    occu++;
    }

    void checkFly(){
    if (fly<3){
        cout<<"Low fly time"<<endl;
    } else {cout<<"High fly time"<<endl;}
    }
};

// inheritance
class TallHuman: public Human { // derived class
public:
    TallHuman(string name, int age):Human(name, age) {

    }
    void hisCar (){
    cout << "The car is Black and Owner age is "<< indA << endl;
    fly++;
    }
};

class ShortHuman: public Human { // derived class
public:
    ShortHuman(string name, int age):Human(name, age) {

    }
    void hisCar (){
    cout << "The car is Black and Owner age is "<< indA << endl;
    fly++;
    }
};

int main()
{
    Human human1("Kojo", 18);
    human1.occuCount();

    human1.getHuman();

    TallHuman Tallman1("Bright", 17);
    Tallman1.occuCount();
    Tallman1.occuCount();
    Tallman1.getHuman();
    Tallman1.hisCar();Tallman1.hisCar();Tallman1.hisCar();Tallman1.hisCar();

    TallHuman Tallman2("Lawrence", 20);
    Tallman2.getHuman();

    ShortHuman Shortman1("Kofi", 21);
    Shortman1.occuCount();
    Shortman1.getHuman();

    Human * cg0 = &Tallman1;
    Human * cg1 = &Shortman1;

    cg0->checkFly();
    cg1->checkFly();



    return 0;
}
