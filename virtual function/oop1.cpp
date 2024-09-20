// //the concept of reinterpret_cast operator on oop
// #include<iostream>

// using namespace std;

// int main()
// {
//     int a=65000;
//     int *iptr=reinterpret_cast<int*>(a);
//     cout<<endl<<iptr;
//     iptr++;
//     cout<<endl<<iptr;
//     a=reinterpret_cast<int>(iptr);
//     cout<<endl<<a;
//     a++;
//     cout<<endl<<a;
// }
// syntax of reinterpret_cast is reinterperet_cast<type>(obj);
#include<iostream>

using namespace std;

int main()
{
    int *ptr=new int (25);
    cout<<"first value ="<<*ptr;
    float *ptr2= reinterpret_cast<float*>(ptr);
    int *ptr3=reinterpret_cast<int*>(ptr2);
    cout<<"final reinterpret cast value is"<<*ptr3;
    return 0;
}