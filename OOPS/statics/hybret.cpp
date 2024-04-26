/*int multiple inheritance altest we use three different classes here the child inhertance the propertiy
of multiple classes all together.but together but they*/

// in a ing=heritance there is only one root class but multiple node classes and each child inherits
//  the properties of root class

//  Hybret inheratnce is the combines of different inherntace  ve creat a object a child class  and we can a classes as a virtul class
// when we preant class ;
#include <iostream>
using namespace std;
class RBI
{
public:
    void msg()
    {
        cout << "RBI\n ";
    }
};
class SBI : virtual public RBI
{
public:
    void smsg()
    {
        cout << "SBI\n";
    }
};
class AXIS : virtual public RBI
{
public:
    void amsg()
    {
        cout << "AXIS\n";
    }
};
class CUST : virtual public SBI, public AXIS
{
public:
    void cmsg()
    {
        cout << "CUSTOMER\n";
    }
};

int main()
{
    CUST c;
    c.smsg();
    c.amsg();
    // c. Axis:: msg(); // without virtual
    c.msg(); // with virtual
}
