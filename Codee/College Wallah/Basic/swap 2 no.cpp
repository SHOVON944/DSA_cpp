#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter X :";
    cin>>x;
    cout<<"Enter Y :";
    cin>>y;
    int z = y;
    y = x;
    x = z;
    cout<<"The swap no of X is :"<<x<<endl;
    cout<<"The swap no of Y is :"<<y<<endl;
    return 0;
}