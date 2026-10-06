#include <iostream>
using namespace std;

class PPA
{
public:
    int no1;
    int no2;

    // DEFAULT CONSTRUCTOR
    PPA()
    {

        cout << "inside default counstructore\n";
    }

    // parametrised constructor
    PPA(int a, int b)
    {

        cout << "inside parametrised counstructore\n";
    }
    // copy constructor
    PPA(PPA &obj)
    {

        cout << "inside copy constructore\n";
    }
    ~PPA()
    {

        cout << "inside destructor\n";
    }
};
int main()
{
    PPA pobj1;         // default
    PPA pobj2(11, 21); // parametrised
    PPA pobj3(pobj1);  // copy

    return 0;
}