// single inheritance
#include<iostream>
using namespace std;
class A
{
    public:
     void display()
     {
 cout<<"This is a single inheritance"<<endl;
     }
};
class B:public A
{
public:
void show()
{
    cout<<"Hello cpp in 2023"<<endl;
}
};
int main()
{
    B obj;
    obj.show();
    obj.display();
    
    return 0;
}