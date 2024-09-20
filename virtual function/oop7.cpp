// concept of virtual destructor in oop;

#include<iostream>

using namespace std;

class base
{
    public:
    virtual ~base()
    {
        cout<<"base class virtual destructor is formed:"<<endl;
    }
};
class derived:public base
{
    public:
    ~derived()
    {
        cout<<"derived class destructor is formed:"<<endl;
    }
};
int main()
{
    base *ptr=new derived;
    delete ptr;
    return 0;
}