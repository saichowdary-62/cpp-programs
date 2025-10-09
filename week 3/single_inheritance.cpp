#include<iostream>
using namespace std;
class person{
	protected:
		string name;
		int age;
		string gender;
		void getp()
		{
			cout<<"Enter name,age and gender of the person :";
			cin>>name>>age>>gender;
		}
		void showp()
		{
			cout<<"Name :"<<name<<endl;
			cout<<"Age :"<<age<<endl;
			cout<<"Gender :"<<gender<<endl;
		}
};
class student:public person{
	private:
		int rollno;
		float perc;
		public:
			void getst()
			{
				getp();
				cout<<"Enter Rollno :";
				cin>>rollno;
				cout<<"Enter percentage :";
				cin>>perc;
			}
			void showst()
			{
				showp();
				cout<<"Roll-no :"<<rollno<<endl;
				cout<<"Percentage :"<<perc<<endl;
			}
};
int main()
{
	student s1,s2;
	s1.getst();
	s2.getst();
	s1.showst();
	s2.showst();
	return 0;
}
