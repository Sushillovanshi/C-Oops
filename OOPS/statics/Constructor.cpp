#include <iostream>
using namespace std;
class job
{
    public:job(int a)
    {
        cout<<a*a;

    }
};
int main()
{
    int n;
    cout<<"enter ur id ";
    cin>>n;
    job j(n);
}







// class job
// {
// public:
//     void show()
//     {
//         cout << "job";
//     }
//     job()
//     {
//         cout << "cybrom"; // defult constructor
//     }
// };

// int main()
// {
//     job j;
//     job show();
// }