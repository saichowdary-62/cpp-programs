#include<iostream>
using namespace std;
class A{
	public:
		A()
		{
			cout<<"Class A constructor is invoked"<<endl;
		}
		~A()
		{
			cout<<"Class A destructor is invoked"<<endl;
		}
};
class B:public A{
	public:
		B()
		{
			cout<<"Class B constructor is invoked"<<endl;
		}
		~B()
		{
			cout<<"Class B destructor is invoked"<<endl;
		}
};
class C:public A{
	public:
		C()
		{
			cout<<"Class C constructor is invoked"<<endl;
		}
		~C()
		{
			cout<<"Class C destructor is invoked"<<endl;
		}
};
int main()
{
	B b;
	C c;
	
	return 0;
}
