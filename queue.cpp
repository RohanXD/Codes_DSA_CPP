#include <iostream>
using namespace std;
int q[10], front = -1, rear = -1, n, v, x, i;
int ch;
void addrear(int);
void delfront();
void disp();
int main()
{
	cout << "Enter Size of queue:";
	cin >> n;
	fflush(stdin);
FUN:
	cout << "Enter Choice:\n1.Push:\n2.Pop:\n3.Display:\n";
	cin >> ch;
	switch (ch)
	{
	case 1:
	{
		addrear(v);
		break;
	}
	case 2:
	{
		delfront();
		break;
	}
	case 3:
	{
		cout << "Elements in the queue are:" << endl;
		disp();
		break;
	}
	default:
	{
		cout << "Enter Correct Choice!!";
		goto FUN;
		break;
	}
	}
CHO:
	cout << "Want to continue:\n1.Yes:\n2.No:\n";
	cin >> ch;
	switch (ch)
	{
	case 1:
	{
		goto FUN;
		break;
	}
	case 2:
	{
		cout << "Program Terminated Here.";
		break;
	}
	default:
	{
		cout << "Enter Correct Choice!!!!" << endl;
		goto CHO;
		break;
	}
	}
}
void addrear(int v)
{
	if (rear == n - 1)
	{
		cout << "Queue Overflow" << endl;
		return;
	}
	else
	{
		if (front == -1)
			front = 0;
		cout << "Insert the element in queue : ";
		cin >> v;
		rear = rear + 1;
		q[rear] = v;
	}
}
void delfront()
{
	if (front == -1 || front > rear)
	{
		cout << "Queue UnderFlow" << endl;
		return;
	}
	else
	{
		cout << "Element deleted from queue is:" << q[front] << endl;
		front = front + 1;
	}
}
void disp()
{
	if (front == -1)
	{
		cout << "Empty Queue" << endl;
		return;
	}
	i = front;
	while (i <= rear)
	{
		cout << q[i] << endl;
		i++;
	}
}