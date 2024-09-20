//to find the aner and perimeter of parallelogram using  pure virtual function

#include<iostream>

using namespace std;
class parallelogram
{
    protected:
    float length;
    float breadth;
    public:
    parallelogram()
    {
        length=0.0;
        breadth=0.0;
    }
    parallelogram(float l,float b)
    {
        length=l;
        breadth=b;
    }
    virtual float perimeter()
    {
        return (2 * (length * breadth));
    }
    virtual float area()=0;
};
class rectangle:public parallelogram
{
    public:
    rectangle()
    {


    }
    rectangle(float l,float b)
    {



    }
    float area() // pure virtual function invoked;
    {
        return (length*breadth);
    }
};
int main()
{
    parallelogram *ptr;
    rectangle r1(10.0,20.0);
    ptr=&r1;
    cout<<"perimeter ="<<ptr->perimeter();
    cout<<"area="<<ptr->area();
    return 0;
}