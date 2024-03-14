#include<iostream>
using namespace std;
class A 
{
    public:
    void show()
    {
        cout<<"Hello virtual base class ";
    }
};
class B:virtual public A
{

};
class C:virtual public A
{

};
class D:public B,public C
{

};
int main()
{
    D obj1;
    obj1.show();
}