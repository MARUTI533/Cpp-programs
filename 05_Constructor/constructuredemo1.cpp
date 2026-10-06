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
    ~PPA()
    {

        cout << "inside destructor\n";
    }
};
int main()
{
    PPA pobj1;
    PPA pobj2;

    return 0;
}