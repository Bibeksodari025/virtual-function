// example problem of virtual function;

#include<iostream>

using namespace std;

class animal
{
    public:
    virtual void display()
    {
        cout<<"animal class:"<<endl;
    }
};
class human:public animal
{
    public:
    void display()
    {
        cout<<"human class:"<<endl;
    }
};
class cow:public animal
{
    public:
    void display()
    {
        cout<<"cow class:"<<endl;
    }
};
int main()
{
    animal *ptr;
    animal a1;
    ptr=&a1;
    ptr->display();
    human h1;
    ptr=&h1;
    ptr->display();
    cow c1;
    ptr=&c1;
    ptr->display();
    return 0;
}