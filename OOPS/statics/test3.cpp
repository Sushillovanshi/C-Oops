#include<iostream>
using namespace std;
class B;
class A{
    int x=50;
    friend void sum(A obj,B obj1);
};
class B{
    int y=10;
    friend void sum(A obj,B obj1);
};
void sum(A obj,B obj1)
{
    if (obj.x>obj1.y)
    {
        cout<<obj.x;
    }
    else{
        cout<<obj1.y;
    }
}
int main()
{
    A a;
    B b;
    sum(a,b);
    return 0;
}

