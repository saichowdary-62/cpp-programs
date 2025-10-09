#include <iostream>
using namespace std;
int num = 100;
namespace MyNamespace 
{
    int num = 200;
    void display() 
	{
        cout << "Inside namespace, num = " << num << endl;
    }
}
int main() 
{
    int num = 300;
    cout << "Local num = " << num << endl;                
    cout << "Global num = " << ::num << endl;            
    cout << "Namespace num = " << MyNamespace::num << endl; 
    MyNamespace::display();
    return 0;
}

