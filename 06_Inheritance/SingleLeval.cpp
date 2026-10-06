#include <iostream>
using namespace std;
class Base
{

public:
  int i, j;
  Base()
  {
    cout << "inside base constructor\n";
  }
  ~Base()
  {
    cout << "inside base destructor\n";
  }
  void fun()
  {
    cout << "inside base fun\n";
  }
  void gun()
  {
    cout << "inside base gun\n";
  }
};
class Derived : public Base
{
public:
  int x, y;
  Derived()
  {
    cout << "inside derived constructor\n";
  }
  ~Derived()
  {
    cout << "inside derived destructor\n";
  }
  void sun()
  {
    cout << "inside derived sun\n";
  }
};
int main()
{
  cout << sizeof(Base) << "\n";
  cout << sizeof(Derived) << "\n";

  // Derived dobj;

  return 0;
}