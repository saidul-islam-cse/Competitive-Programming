#include <bits/stdc++.h>
using namespace std;
class LivingThing
{
public:
    void breathe()
    {
        cout << "Breathing..." << endl;
    }
};
class Animal : public LivingThing
{
public:
    void eat()
    {
        cout << "Eating Food..." << endl;
    }
};
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking..." << endl;
    }
};
int main()
{
    Dog d;
    d.breathe();
    d.eat();
    d.bark();
    return 0;
}