#include<iostream>
using namespace std;
class Test
{
	int x;
	public:
		Test inp(Test);
		void out(Test);
};
int main()
{
	Test t1,z;
	z=t1.inp(t1);
	t1.out(z);
	return 0;
}
Test Test::inp(Test t1)
{
	cout<<"Enter Value:";
	cin>>t1.x;
	return t1;
}
void Test::out(Test t1)
{
	cout<<"Value "<<t1.x<<endl;
}

