#include <iostream>
using namespace std;
class student
{
    char sname[10];
    int marks[5];
    int total;
    int tmax;

public:
    void assigns()
    {
        cout << "enter name \n";
        cin >> sname;
        cout << "enter marks of 5 subject \n";
        
        for (int i = 0; i < 5; ++i)
        {
            cin>>marks[i];
        }
    }

    void compute()
    {
        total = 0;
        tmax = 0;
        for (int i = 0; i < 5; ++i)
        {
            total = total + marks[i];
            if (tmax < marks[i])
            {
                tmax = marks[i];
            }
        }
    }
    void display()
    {
        cout << "Total marks obtained=" << total;
        cout << "max mark=" << tmax;
    }
};
int main()
{
    student s;
    s.assigns();
    s.compute();
    s.display();
}