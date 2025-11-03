#include <bits/stdc++.h>
using namespace std;
class CoffeeMachine
{
public:
    void makeCoffee()
    {
        boilWater();
        brewCoffee();
        pourIncup();
        cout << "Coffee is ready!" << endl;
    }

private:
    void boilWater()
    {
        cout << "Boiling water..." << endl;
    }
    void brewCoffee()
    {
        cout << "Brewing coffee..." << endl;
    }
    void pourIncup()
    {
        cout << "Pouring coffee..." << endl;
    }
};
int main()
{
    CoffeeMachine cm;
    cm.makeCoffee();

    return 0;
}


// Abstraction মানে হলো implementation লুকিয়ে user-কে শুধু প্রয়োজনীয় অংশ দেখানো।