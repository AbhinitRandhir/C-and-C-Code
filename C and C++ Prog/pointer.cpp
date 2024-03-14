#include<iostream>
using namespace std;
class number
{
    private:
    int a,b,c;
    public:
    void getdata(int i,int j,int k)
    {
        a=i;
        b=j;
        c=k;
    }
    void prndata(void)
    {
        cout<<"a="<<a<<"b="<<b<<"c="<<c;
    }
};