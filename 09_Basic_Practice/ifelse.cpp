#include <iostream>
using namespace std;
int main()
{
  int no = 0;
  cout << "enter the std";
  cin >> no;
  if (no == 1)
  {
    cout << "9.30 ";
  }
  else if (no == 2)
  {
    cout << "10.30";
  }
  else if (no == 3)
  {
    cout << "11.30";
  }
  else
  {
    cout << "invalid";
  }
  return 0;
}