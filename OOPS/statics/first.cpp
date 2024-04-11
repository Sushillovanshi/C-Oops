#include <iostream>
using namespace std;

class top
{
    int a, b;
    void sum()

        {
            cout << "top class";
        }

    friend void cybrom(top & t);
       
    };
    void cybrom (top & t)
{
    t.sum();
    t.a=20;
    t.b=90;
    cout<<t.a+t.b;
    
}
int main()
{
    top t;
    cybrom(t);
}
