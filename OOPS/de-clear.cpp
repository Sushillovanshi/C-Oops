#include<iostream>
using namespace std;
 class prg 
 {
    int c;
    public:void result(int a, int b);

 };

 void prg::result(int a, int b)
 {
    c=a+b;
    cout<<c;
 }

 int main()
 {
    prg j;
    j.result(4,5);
    cout<<"done";
 }