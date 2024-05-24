/*Area of Circle*/
#include <iostream>
using namespace std;
int main()
{
    double ar, r, p = 3.142857;
    cout << "Enter the radius of the Circle:";
    cin >> r;
    while (r == 0.0)
    {
        cout << "Area is not Possible" << endl;
        cout << "Enter Radius Again:";
        cin >> r;
    }
    ar = p * r * r;
    cout << "Area of Circle:" << ar;
}
