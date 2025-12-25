#include<bits/stdc++.h>
using namespace std;

class Parent{
    public:
    int x;

    protected:
    int y;

    private:
    int z;
};
class Child1: public Parent{
    // x will remain public
    // y will remail protected
    // z will not accessible
};
class Child3: protected Parent{
    // x will remain protected
    // y will remail protected
    // z will not accessible
};
class Child2: private Parent{
    // x will remain private
    // y will remail private
    // z will not accessible
};

int main()
{
    Parent p;
    p.x;

    return 0;
}