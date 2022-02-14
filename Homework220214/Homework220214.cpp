#include <iostream>

class A
{
public:

    A& operator()()
    {
        return *this;
    }
};

int main()
{
    A NewA1;

    A NewA2(NewA1());

}