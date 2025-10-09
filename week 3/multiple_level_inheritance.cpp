#include<iostream>
using namespace std;
class student{
	protected:
		int rollno;
		string name;
		void getst()   {
			cout<<"Enter Rollno and Name :";
			cin>>rollno>>name;    }
		void showst()   {
			cout<<"Name :"<<name<<endl;
			cout<<"Rollno :"<<rollno<<endl;   }    };
class marks:public student{
	protected:
		int m1,m2,m3,m4,m5;
		void getm()  {
			getst();
			cout<<"Enter Five subjects - marks :";
			cin>>m1>>m2>>m3>>m4>>m5;    } };
class percentage:public marks{
	public:
		float perc;
		void showp()   {
			getm();
			perc=((float)(m1+m2+m3+m4+m5)/500)*100;
			showst();
			cout<<"Percentage :"<<perc<<"%";    }  };
int main()  {
	percentage p;
	p.showp();
	return 0;  }
