// inheritance
#include<iostream>
using namespace std;
class father
{
    protected:
    string surname="Chaurasiya";
};
class son1:father
{
    string name="Abhinit";
    public:
    void show(){
    cout<<name<<surname<<endl;
    }
};
class son2:father
{
    string name="Monu";
    public:
    void display(){
    cout<<name<<surname<<endl;
    }
};
int main()
{
    son1 obj1;
    obj1.show();
    son2 obj2;
    obj2.display();
    return 0;
}
