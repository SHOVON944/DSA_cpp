#include<iostream>
using namespace std;

int main()
{
    int x, y;
    cout<<x<<endl;
    cout<<x<<endl<<endl;
    cin>>x>>y;

    cout<<x<<endl;
    cout<<y<<endl<<endl;

    int *ptr_x = &x;
    int *ptr_y = &y;
    cout<<ptr_x<<endl;
    cout<<ptr_y<<endl<<endl;

    int result;
    cout<<result<<endl;
    int *ptr_result = &result;
    cout<<ptr_result<<endl;

    *ptr_result = *ptr_x + *ptr_y;
    cout<<result<<endl;
    cout<<*ptr_result<<endl;


    return 0;
}