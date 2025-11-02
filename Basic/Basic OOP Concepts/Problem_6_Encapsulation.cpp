#include <bits/stdc++.h>
using namespace std;
class BankAccount
{
private:
    string name;
    double balance;

public:
    BankAccount(string n, double b)
    {
        name = n;
        balance = b;
    }
    // Setter
    void deposit(double amount)
    {
        if (amount > 0)
            balance += amount;
    }

    // getter
    double getBalance()
    {
        return balance;
    }

    void display()
    {
        cout << "Account Holder: " << name << endl;
        cout << "Current Balance: " << balance << endl;
    }
};
int main()
{
    BankAccount acc("Saidul", 5000.00);
    acc.display();
    acc.deposit(2000);
    cout << "Balance access by getter: " << acc.getBalance() << endl
         << endl;
    acc.display();
    return 0;
}

/*

Encapsulation মানে হলো data এবং function একসাথে class-এর ভিতরে রাখা, এবং
ডেটা বাইরে থেকে সরাসরি access না করা, বরং getter/setter function দিয়ে নিয়ন্ত্রণ করা।



Explanation:

private: → name, balance বাইরের থেকে সরাসরি access করা যাবে না

শুধুমাত্র deposit() এবং getBalance() দিয়েই access করা যাবে

Encapsulation এর মূল লক্ষ্য = data hide + control access

*/