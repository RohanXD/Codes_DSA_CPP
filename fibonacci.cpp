/*Fibonacci series*/
#include <iostream>
using namespace std;
int main()
{
    int n1 = 0, n2 = 1, n3, i, num;
    cout << "Enter the number of elements:";
    cin >> num;
    cout << n1 << endl
         << n2 << endl;       // print 1st and 2nd number
    for (i = 2; i < num; ++i) // loop start from 2 cause 0 and 1 which are 1st and 2 nd number already printed
    {
        n3 = n1 + n2;
        cout << n3 << endl;
        n1 = n2;
        n2 = n3;
    }
    return 0;
}