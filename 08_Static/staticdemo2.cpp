#include <iostream>
using namespace std;
class demo
{
public:
  int no1;
  int no2;
  static int X;

  demo(int i, int j)
  {

    no1 = i;
    no2 = j;
  }
  void fun()
  {
    cout << "inside fun\n";
    cout << no1 << "\n";
    cout << no2 << "\n";
    cout << X << "\n";
  }
  static void gun()
  {
    cout << "inside gun\n";
    cout << X << "\n";
  }
};

int demo ::X = 11;
int main()
{
  cout << demo::X << "\n";
  demo::gun();

  return 0;
}