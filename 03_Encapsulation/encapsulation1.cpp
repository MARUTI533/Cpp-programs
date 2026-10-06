#include <iostream>
using namespace std;

class demo
{
    int i;
    char ch;
    float f;
};

int main()
{
    demo dobj;
    cout << sizeof(dobj);
    return 0;
}