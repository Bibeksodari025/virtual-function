// //array of pointer objects of base class;

// #include<iostream>

// using namespace std;

// class animal
// {
//     public:
//     virtual void display()
//     {
//         cout<<"animal class :"<<endl;
//     }
// };
// class cow : public animal
// {
//     public:
//     void display()
//     {
//         cout<<"cow class:"<<endl;
//     }
// };
// class dog:public animal
// {
//     public:
//     void display()
//     {
//         cout<<"dog class:"<<endl;
//     }
// };
// int main()
// {
//     animal *ptr[3];
//     animal a1;
//     cow c1;
//     dog d1;
//     ptr[0]=&a1;
//     ptr[1]=&c1;
//     ptr[2]=&d1;
//     for(int i=0;i<3;i++)
//     {
//         ptr[i]->display();
//     }
//     return 0;
// }

#include<iostream>


using namespace std;

class employee
{
    protected:
    int roll;
    float salary;
    public:
    void input()
    {
        cout<<"enetr the roll and salary:";
        cin>>roll>>salary;
    }
    void display()
    {
        cout<<"roll of employee="<<roll<<endl;
        cout<<"salary of employee="<<salary<<endl;
    }
};
class student:public employee
{
    // public:
    // void display()
    // {
    //     employee::display();
    // }
};

int main()
{
    employee *ptr[2];
    employee e1;
    student s1;
    ptr[0]=&e1;
    ptr[1]=&s1;
    for(int i=0;i<2;i++)
    {
        ptr[i]->input();
    }
    for(int i=0;i<2;i++)
    {
        ptr[i]->display();
    }
    return 0;
}