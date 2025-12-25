#include<iostream>
using namespace std;

class Complex{
    public:
    int real;
    int img;
    Complex(int x, int y){
        real = x;
        img = y;
    }

    Complex operator+ (Complex &c){

    }
};

int main()
{
    Complex c1(1, 2);
    Complex c2(1, 3);
    c1+c2;

    return 0;
}