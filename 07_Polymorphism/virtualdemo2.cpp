#include <iostream>
using namespace std;
#pragma pack(1)
class base
{
public:
  int i, j;
  void fun() // 1000
  {
    cout << "base fun\n";
  }
  void gun() // 2000
  {
    cout << "base gun\n";
  }
  virtual void sun() // 3000
  {
    cout << "base sun\n";
  }
  virtual void run() // 4000
  {
    cout << "base run\n";
  }
}; // 12 bytes
#pragma pack(1)
class derived : public base
{
public:
  int x;
  void fun() // 5000
  {
    cout << "derived fun\n";
  }
  void sun() // 6000
  {
    cout << "derived sun\n";
  }
  virtual void mun() // 7000
  {
    cout << "derived mun\n";
  }
  void bun() // 8000

  {
    cout << "derived bun\n";
  }
}; // 16 bytes

int main()
{
  base *bp = new derived();
  // cout << sizeof(base) << "\n";
  // cout << sizeof(derived) << "\n";

  bp->fun();
  bp->gun();
  bp->sun();
  bp->run();
  // bp->mun(); // error
  // bp->bun(); // error

  return 0;
}