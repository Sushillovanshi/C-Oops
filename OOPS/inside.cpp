#include<iostream>
using namespace std;
 class prg
 {
    int c;
    public:void sum (int a, int b)
    {
        c = a+b;
        cout<<c;
    }
 };

 int main()
 { prg p;
 p.sum(5,10);
 }