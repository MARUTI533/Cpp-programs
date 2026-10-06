#include <iostream>
using namespace std;
#pragma pack(1)
class base
{
public:
  int i, j;
  void fun()
  {
    cout << "base fun\n";
  }
  void gun()
  {
    cout << "base gun\n";
  }
  virtual void sun()
  {
    cout << "base sun\n";
  }
  virtual void run()
  {
    cout << "base run\n";
  }
}; // 16 bytes
#pragma pack(1)
class derived : public base
{
public:
  int x;
  void fun()
  {
    cout << "derived fun\n";
  }
  void sun()
  {
    cout << "derived sun\n";
  }
  virtual void mun()
  {
    cout << "derived mun\n";
  }
  void bun()
  {
    cout << "derived bun\n";
  }
}; // 20 bytes

int main()
{
  base *bp = new derived();
  cout << sizeof(base) << "\n";
  cout << sizeof(derived) << "\n";

  bp->fun();
  bp->gun();
  bp->sun();
  bp->run();
  // bp->mun(); // error
  // bp->bun(); // error

  return 0;
}