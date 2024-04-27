#include<iostream>
#include<cstring>
using namespace std;
class shop{
    int itemCode[100];
    string itemName[100];
    float price[100];
    int total=0;
    int count=0;
    public:void add(){
        for (int i=0;i<100;i++)
        {
            cout<<"Enter itemCode :";
            cin>>itemCode[i];
            cout<<"Enter itemName :";
            cin>>itemName[i];
            cout<<"Enter price";
            cin>>price[i];
            int n;
            cout<<"Enter 1 To add next item\n0 to calculate bill :";
            count++;
            cin>>n;
            if(n==1){
                continue;
            }
            else{
                break;
            }
        }
    }
    void show(){
        cout<<"\n"<<"\n";
        cout<<"itemCode\t"<<itemName\t"<<"price\n";
        
    }
}