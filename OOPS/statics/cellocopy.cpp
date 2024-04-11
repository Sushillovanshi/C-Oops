#include<iostream>
using namespace std;

class top
{
    int a;
    int *p;
public:top(){
    a=0;
    p=new int;
    p=0;
}

top (int x, int y)
{
    a=x;
    p=&y;

}
void update ()
{
    a=a+1;
    *p=*p+1;
}
void show()
{
    cout<<"vlaue of a="<<a<<"\n";
    cout<<"vlaue of *p="<<*p<<"\n";


}
};
int main()
{
    top t1(10,20);
    t1.show();
    top t2(t1);
    t2.update();
    t2.show();
    t1.show();
    
}
 