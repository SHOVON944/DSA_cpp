#include<iostream>
using namespace std;

int main()
{
    int n1 = 5; // 0101
    cout<<(n1<<1)<<endl; // 10
    cout<<(n1>>1)<<endl; //2

    int n2 = 8; //1000
    cout<<(n1 & n2)<<endl; //0
    cout<<(n1 | n2)<<endl; //1101=13

    return 0;
}