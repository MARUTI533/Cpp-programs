#include <iostream>
using namespace std;

class PPA
{
public:
    int no1;
    int no2;

    void diplay()
    {

        cout << "inside display\n";
    }
};
int main()
{
    PPA pobj;
    cout << sizeof(pobj) << "\n";

    return 0;
}