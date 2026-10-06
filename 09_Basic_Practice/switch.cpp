#include <iostream>
using namespace std;
int main()
{

  int no = 0;
  cout << "enter std";
  cin >> no;
  switch (no)
  {
  case 1:
    cout << "9.30";
    break;
  case 2:
    cout << "10.30";
    break;
  case 3:
    cout << "11.30";
    break;
  default:
    cout << "invalid";
  }
}