// #include<iostream>
// using namespace std ;   // buttom to top example ============= //ṇ
// int main()
// {
//     cout<<"good";

// }
// class top
// {
//     public:void show()
//     {
//         cout<<"hello";
//     }
// };


// CLASS A CLASS WHICH IS HAVING AN OBJECT PERVIOUS CLASS IS CONSIDERDE ASA COMPOSITE CLASS 

#include<iostream>
using namespace std ;  
class faculty
    
    {
        
       public: int id=101;
        public:void code()
        {
            cout<<"faculty have code \n";

        }

    };
    class student
    {
        faculty f;
        public:void show()
        {
            cout<<"faculty code="<<f.id;
        }
    };

    int main()
    {
        faculty f;
        student s;
        f.code();
        s.show();
    }
