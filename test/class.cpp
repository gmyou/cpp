#include <iostream>

using namespace std;

class Animal 
{
public:
    void speak()
    {
        cout << "Grrrrr~~~" << endl;
    }
};

class Cat: public Animal
{
public:
    void jump()
    {
        cout << "Jumping" << endl;
    }
};

class Tiger: public Cat
{
public:
    void hunt()
    {
        cout << "Hunting" << endl;
    }
};

int main()
{
    Animal a;
    a.speak();

    Cat c;
    c.speak();
    c.jump();

    Tiger t;
    t.speak();
    t.jump();
    t.hunt();
}