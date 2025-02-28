#include <iostream>
using namespace std;

class Animal
{
protected:
    string name;
    int years;
public:
    // constructor
    Animal(string _name, int _years) : name(_name), years(_years) {}

    virtual void makesound() = 0;

    void showdata(){
        cout << "Name: " << name << ", age: " << years << " years." << endl;
    }

    virtual ~Animal(){
        cout << name << "has been deleted" << endl;
    };
};

class Dog : public Animal
{
private:
    string race;
public:
    Dog(string _name, int _years, string _race) : Animal(_name, _years), race(_race) {}

    void makesound() override
    {
        cout << " Guau Guau " << endl;
    }

    void showRace ()
    {
        cout << "This dog is a" << race<< endl;
    }
};

class Cat : public Animal
{
public:
    Cat(string _name, int _years) : Animal(_name, _years) {}
    
    void makesound() override
    {
        cout << " Miau Miau " << endl;
    }

    void ronronear()
    {
        cout << "prrrrrrrr" <<endl;
    }
};

int main()
{
    Animal* mycat2 = new Cat("Aura", 4);
    Dog myDog("firulais", 8, "dobberman");
    Cat myCat("Obito", 3);

    mycat2->showdata();
    mycat2->makesound();
    // myscat2->ronronear(); 
    
    myDog.showdata();
    myDog.makesound();
    myDog.showRace();

    myCat.showdata();
    myCat.makesound();
    myCat.ronronear();

    return 0;
}
