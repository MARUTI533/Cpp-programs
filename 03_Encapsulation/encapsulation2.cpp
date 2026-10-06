#include <iostream>
using namespace std;
#pragma pack(1)

class demo
{
    int i;
    char ch;
    float f;
};

int main()
{
    demo dobj;
    cout << sizeof(dobj) << "\n";
    return 0;
}