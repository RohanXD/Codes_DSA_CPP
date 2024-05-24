// Area Of triangle, Circle, Rectangle
#include <iostream>
using namespace std;
class Test
{
    float r, l, b;
    int s;

public:
    float area(float r);
    float area(float l, float b);
    int area(int s);
};
int main()
{
    float r, l, b;
    int s;
    Test t1;
    fflush(stdin);
    cout << "Enter Radius Of Circle:";
    cin >> r;
    cout << "Area Of Circle:" << t1.area(r) << endl;
    cout << "Enter Length and Breath Of Reactangle:" << endl;
    cin >> l >> b;
    cout << "Area Of Reactangle:" << t1.area(l, b) << endl;
    cout << "Enter Side of Square:";
    cin >> s;
    cout << "Area Of Square:" << t1.area(s) << endl;
    cout << "Program End Here." << endl;
}
int Test::area(int r)
{
    return (r * r);
}
float Test::area(float r)
{
    return (3.14 * r * r);
}
float Test::area(float l, float b)
{
    return (l * b);
}
