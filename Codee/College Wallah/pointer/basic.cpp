#include<iostream>
using namespace std;

int main()
{
    // int a = 1;
    // int *p = &a;
    // int **pp = &p;
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<**pp<<endl;

    // float b = 3.5;
    // float *q = &b;
    // cout<<q<<endl;

    // int *ptr;
    // int x;
    // cout<<x<<endl;
    // cout<<ptr;


    int *ptr;
    int marks = 90;
    ptr = &marks;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    *ptr = marks + 1;
    cout<<*ptr<<endl;
    cout<<marks<<endl;


    return 0;
}