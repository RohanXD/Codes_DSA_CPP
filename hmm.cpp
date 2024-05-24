#include <iostream>
using namespace std;
class Swap
{
    int x;

public:
    void swap1(int, int);
};
void Swap::swap1(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
    cout << "After Swap" << endl;
    cout << "a = " << a << ", b = " << b << endl;
}
int main()
{
    Swap s1;
    int a, b;
    cout << "Enter Numbers:";
    cin >> a >> b;
    cout << "Value of " << endl;
    cout << " a= " << a << ", b= " << b << endl;
    s1.swap1(a, b);

    return 0;
}