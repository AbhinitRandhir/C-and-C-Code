#include<iostream>
using namespace std;
class A 
{
    public:
    int a;
    A()
    {
        a=100;
    }
    void show()
    {
        cout<<a;
    }
};
int main()
{
    A obj;
    obj.show();
    return 0;
}
