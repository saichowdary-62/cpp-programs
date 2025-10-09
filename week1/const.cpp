#include <iostream>
using namespace std;
class Demo 
{
public:
    Demo()      // Constructor
{
        cout << "Constructor called: Object created." << endl;
    }
    ~Demo()    // Destructor
{
        cout << "Destructor called: Object destroyed." << endl;     }
};
int main()    {
    cout << "Inside main function." << endl;
    Demo obj; 
    cout << "Exiting main function." << endl;
    return 0;  
}

