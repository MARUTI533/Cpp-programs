#include <iostream>
using namespace std;
class arithmatic
{
public:
  int no1;
  int no2;
  int no3;
  int no4;
  int no5;
  int no6;

  arithmatic()
  {
    no1 = 0;
    no2 = 0;
    no3 = 0;
    no4 = 0;
    no5 = 0;
    no6 = 0;
  }
  arithmatic(int i, int j, int k, int l, int m, int n)
  {
    no1 = i;
    no2 = j;
    no3 = k;
    no4 = l;
    no5 = m;
    no6 = n;
  }
  int addition()
  {
    int ans = 0;
    ans = no1 + no2;
    return ans;
  }
  int substraction()
  {

    int ans1 = 0;
    ans1 = no3 - no4;
    return ans1;
  }
  int multiplication()
  {

    int ans2 = 0;
    ans2 = no5 * no6;
    return ans2;
  }
};
int main()
{
  int no1 = 0, no2 = 0, no3 = 0;

  int no4 = 0, no5 = 0, no6 = 0;
  int result;
  cout << "enter two numbers \n";
  cin >> no1 >> no2;

  arithmatic aobj(no1, no2, no3, no4, no5, no6);
  cout << "enter two numbers \n";
  cin >> no3 >> no4;

  arithmatic sobj(no2, no3, no3, no4, no5, no6);
  cout << "enter two numbers \n";
  cin >> no5 >> no6;
  arithmatic mobj(no5, no6, no3, no4, no5, no6);
  // int result = 0;

  // result = (no1, no2);

  result = aobj.addition();

  cout << "addition is: "
       << result << "\n";

  result = sobj.substraction();

  cout << "substraction is:"
       << result << "\n";

  result = mobj.multiplication();

  cout << "multiplication is:"
       << result << "\n";
  return 0;
}