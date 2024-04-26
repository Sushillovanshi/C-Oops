#include<iostream>
using namespace std;

// class rbi
// {
//     int a=10;
//     public:void msg()
//     {
//         cout<<a;
//     }
// };
// class sbi :public rbi
// {
//     int s= 200;
//     public:void alert()
//     {
//         cout<<s<<"\n";
//     }
// };
// int main()
// {
//     sbi obj;
//     obj.alert();
//     obj.msg();


// }

// ===========2 

// class reward
// {
//     protected:void RogueHacked()
//     {
//         cout<<"you are System hacked by Rogue hacker \n";
//     }
// };
// class sbi :public reward
// {
//     public:void reward()
//     {
//         RogueHacked();
//         cout<<"$100000000\n";
//     }
// };
   
// int main()
// {
//     sbi obj;
//     obj.reward();

    

// }

// 3

class reward
{
    protected:void RogueHacked()
    {
        cout<<"you are System hacked by Rogue hacker \n";
    }
};
class sbi :public reward
{
    public:void reward()
    {
        RogueHacked();
        cout<<"$100000000\n";
    }
};
class customer:public sbi{
    public:void cust()
    {
        cout<<" Welcome Customer!!\n";
    }
};
   
int main()
{
   customer obj;
   obj.cust();
   obj.reward(); 
    

}

