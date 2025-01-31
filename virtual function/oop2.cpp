// concept on dynamic_cast operator in oop
#include<iostream>
//
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
void check(animal * a1)
{
    human *h1;
    cow *c1;
    if(h1=dynamic_cast<human*>(a1))
    {
        cout<<"animal class pointed to human class object:";
        h1->display();
    }
    else if(c1=dynamic_cast<cow*>(a1))
    {
        cout<<"animal class pointed to cow class objects:";
        c1->display();
    }
    else{
        cout<<"animal class pointed to anmal class objects:";
        a1->display();
    }
}
int main()
{
    check(new human());
    check(new cow());
    check(new animal());
    return 0;
}
