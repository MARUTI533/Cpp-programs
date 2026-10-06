#include <iostream>
using namespace std;
class arithmatic
{
public:
  int no1;
  int no2;

  arithmatic()
  {
    this->no1 = 0;
    this->no2 = 0;
  }
  arithmatic(int i, int j)
  {
    this->no1 = i;
    this->no2 = j;
  }
  // int addition(arithimatic *this)
  int addition()
  {
    int ans = 0;
    ans = this->no1 + this->no2;
    return ans;
  }
  // int substraction(arithimatic *this)
  int substraction()
  {
    int ans = 0;
    ans = this->no1 - this->no2;
    return ans;
  }
};

int main()
{

  arithmatic aobj1(12, 11);
  int result = 0;
  // result=additon (&aobj1)
  result = aobj1.addition();
  cout << "additon is:" << result << "\n";
  // result=substraction (&aobj1)
  result = aobj1.substraction();
  cout << "substraction is:" << result << "\n";

  return 0;
}