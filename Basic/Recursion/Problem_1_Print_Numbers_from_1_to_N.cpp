#include<bits/stdc++.h>
using namespace std;
void printNumbers(int n)
{
    if(n==0) return;
    printNumbers(n-1);
    
    cout << n <<" ";
}
int main()
{
   int n;
   cout<<"Enter Number: ";
   cin>>n;
   cout<<"Print 1 to N numbers: ";
   printNumbers(n);
   return 0;
}

/*
Definition:
Recursion হলো এমন একটি প্রোগ্রামিং টেকনিক যেখানে একটি function নিজেকেই আবার call করে কোনো বড় problem কে ছোট ছোট subproblem এ ভাগ করে সমাধান করে।

Basic Idea:
প্রতিটি recursive function এর মধ্যে থাকতে হবে:

Base Case: যেখানে recursion থেমে যাবে।

Recursive Case: যেখানে function নিজেকে আবার call করবে।

*/