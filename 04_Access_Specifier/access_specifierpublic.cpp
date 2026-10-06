#include <iostream>
using namespace std;
#pragma pack(1)

class demo
{
public:
    int i;
    char ch;
    float f;
};

int main()
{
    demo dobj;
    dobj.i = 11;
    dobj.ch = 'A';
    dobj.f = 3.14;
    cout << dobj.i << "\n";
    cout << dobj.ch << "\n";
    cout << dobj.f << "\n";

    return 0;
}