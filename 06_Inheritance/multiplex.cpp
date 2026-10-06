#include <iostream>
using namespace std;
class BaseA
{
public:
  int i, j;
  BaseA()
  {
    cout << "inside baseA constructor\n";
  }
  ~BaseA()
  {
    cout << "inside baseA constructor\n";
  }
  void fun()
  {
    cout << "inside baseA fun\n";
  }
};
class BaseB
{
public:
  int x, y;
  BaseB()
  {
    cout << "inside baseB constructor\n";
  }
  ~BaseB()
  {
    cout << "inside baseB constructor\n";
  }
  void gun()
  {
    cout << "inside baseB gun\n";
  }
};
class Derived : public BaseA, BaseB
{
public:
  int a;
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

  Derived dobj;

  return 0;
}