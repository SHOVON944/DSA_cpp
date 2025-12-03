#include<iostream>
using namespace std;

int main()
{
    int x = 9;
    int y = 2;
    int *ptr = &x;
    //ptr = 6;    // error..karon ptr address store korte pare ..value na(S).
    //*ptr = &y;  // this don't work as we cannot store address in an int bucket
    cout<<"Address of x: "<<&x<<endl;
    cout<<&ptr<<endl;   // prints the address of the ptr bucket, not the address stored in ptr

    return 0;
}