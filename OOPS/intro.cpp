#include<iostream>>
using namespace std;

// class show {
//  int a;
//  double b;
//  char c;
// };

class  show{
    // data member --> varible
    // member function --> functions.

    int a,b;
    public:void sum()

   { a=10,b=20;
    cout<<a+b;
    }
    void hello()
    {
        cout<<"Hello";
    }

};

int main()
{
    // show obj;
    //cout << sizeof(obj);

    show obj;
    obj.sum();
    obj.hello();
}

// we can creat function inside the class bye to ways   
// 1 function delclear and difine 
//2 delclear inside 


