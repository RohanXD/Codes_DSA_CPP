// Tablke in Class
#include <iostream>
using namespace std;
class Table
{
    int x;

public:
    void mul(int);
};
void Table::mul(int n)
{
    int i;
    for (int i = 1; i <= 10; ++i)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}

int main()
{
    Table t1;
    int s;
    cout << "Enter a positive integer: ";
    cin >> s;
    t1.mul(s);
    return 0;
}