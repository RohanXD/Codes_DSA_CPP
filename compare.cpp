#include <iostream>
using namespace std;
class Compare
{
    int x;

public:
    void cmp(int, int);
};
void Compare::cmp(int x, int y)
{
    if (x == y)
        cout << x << " == " << y << endl;
    if (x < y)
        cout << x << " < " << y << endl;
    if (x > y)
        cout << x << " > " << y << endl;
}
int main()
{
    Compare c1;
    int a, b;
    cout << " Input the first integer: ";
    cin >> a;
    cout << " Input the second integer: ";
    cin >> b;
    c1.cmp(a, b);
    return 0;
}