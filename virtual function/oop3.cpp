// to know thow the concept of type_id operator in virtual function

#include<iostream>
#include<typeinfo>

using namespace std;

class animal
{
    public:
    virtual void display()
    {
        cout<<"animal class:";
    }
};
class human:public animal
{
    public:
    void display()
    {
        cout<<"human class:";
    }
};
class cow:public animal
{
    public:
    void display()
    {
        cout<<"cow class:";
    }
};
void check(animal *a1)
{
    cout<<"animal class pointing to object of the typeid"<<typeid(*a1).name();
}
int main()
{
    check(new human());//animal *a=new human();
    check(new cow());
    check(new animal());
    return 0;
}