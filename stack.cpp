#include <iostream>
using namespace std;
int st[10], top = -1, n, i = 0, x, v, ch;
int choice;
void fill(int);
void peek();
void push();
void pop();
int main()
{
    cout << "Enter number of Elements in Stack:";
    cin >> n;
    fill(n);
FUN:
    cout << "Enter Your Choice:\n1.Push:\n2.Pop:\n3.Peek:\n";
    cin >> ch;
    switch (ch)
    {
    case 1:
    {

        push();
        break;
    }
    case 2:
    {
        pop();
        break;
    }
    case 3:
    {
        peek();
        break;
    }
    default:
    {
        cout << "Enter Correct Choice Again!!!";
        goto FUN;
        break;
    }
    }
CHO:
    cout << "\nWant to Continue:\n1.Yes:\n2.No:\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        goto FUN;
        break;
    }
    case 2:
    {
        cout << "Program Ends Here";
        break;
    }
    default:
    {
        cout << "Enter Correct Choice:";
        goto CHO;
        break;
    }
    }
    return 0;
}
void fill(int)
{
    while (i < n / 2)
    {
        cout << "Enter a" << i + 1 << ":";
        cin >> st[i];
        ++i;
        ++top;
    }
}
void peek()
{
    if (top == -1)
    {
        cout << "Empty Stack" << endl;
        return;
    }
    else
        cout << "Value at Top of the Stack:" << st[top];
}
void push()
{
    if (top == n - 1)
    {
        cout << "Stack Overflow" << endl;
        return;
    }
    else
    {
        cout << "Enter Value to be pushed:";
        cin >> v;
        st[++top] = v;
    }
}
void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow" << endl;
        return;
    }
    else
        cout << "Deleted element From the top of Stack is:" << st[top--] << endl;
}
