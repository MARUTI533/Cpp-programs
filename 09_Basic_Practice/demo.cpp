#include <iostream>
using namespace std;
int addition(int m, int t)
{
    int result = 0;
    result = m + t;
    return result;
}
int main()
{
    int a = 0, b = 0, ans;
    cout << "enter first number\n";
    cin >> a;
    cout << "enter second number\n";
    cin >> b;
    addition(a, b);
    ans = addition(a, b);
    cout << "addition is:" << ans;

    return 0;
}