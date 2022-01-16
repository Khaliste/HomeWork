#include <iostream>

using namespace std;

int main()
{
    int Arr[10] = {0, };
    int Index = 0;

    while (true)
    {
        if (Index < sizeof(Arr) / sizeof(*Arr))
        {
            Arr[Index] = 2 * Index + 2;
            Index++;
        }
        else
        {
            break;
        }
    }

    int Arr[10] = { 0, };
    int Index = 0;

    while (true)
    {
        if (Index < sizeof(Arr) / sizeof(*Arr))
        {
            Arr[Index] = 2 * Index + 1;
            Index++;
        }
        else
        {
            break;
        }
    }
}