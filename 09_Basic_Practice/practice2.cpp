
#include <iostream>
using namespace std;
class demo
{
public:
  int i;
  int j;

  demo()
  {

    this->i = 0;
    this->j = 0;
    cout << "inside the defult constructor\n";
  }
  demo(int no1, int no2)
  {
    this->i = no1;
    this->j = no2;

    cout << "inside parametrise constructor\n";
  }
  int addition()
  {
    int ans;
    ans = this->i + this->j;
    return ans;
  }
};

int main()
{

  demo dobj1(11, 44);
  demo dobj2(2, 33);
  int result = 0;
  int result1 = 0;
  result = dobj1.addition();
  result1 = dobj1.addition();

  cout << "addition of:" << result << "\n";
  cout << "addition of:" << result1 << "\n";

  return 0;
}