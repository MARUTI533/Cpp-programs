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
    cout << "inside constructor\n";
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
  demo obj1(10, 20);
  demo obj2(30, 40);
  obj1.fun();
  obj2.fun();

  return 0;
}