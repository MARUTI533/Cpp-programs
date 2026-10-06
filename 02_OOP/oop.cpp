#include <iostream>
using namespace std;
class arithmatic
{
public:
  int no1;
  int no2;

  arithmatic()
  {
    no1 = 0;
    no2 = 0;
  }
  arithmatic(int i, int j)
  {
    no1 = i;
    no2 = j;
  }
};

int main()
{
  arithmatic aobj1;
  arithmatic aobj2(10, 11);
  cout << aobj1.no1 << "\n";
  cout << aobj1.no2 << "\n";
  cout << aobj2.no1 << "\n";
  cout << aobj2.no2 << "\n";
  return 0;
}