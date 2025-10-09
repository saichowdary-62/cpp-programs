#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    double a, b, c, d, root1, root2, realPart, imagPart;
    cout << "Enter a, b, c values: ";
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;
    if (d == 0) 
	{
        root1 = root2 = -b / (2 * a);
        cout << "Roots are real and equal: " << root1 << " " << root2 << endl;
    }
    else if (d > 0) 
	{
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        cout << "Roots are real and distinct: " << root1 << " " << root2 << endl;
    }
    else 
	{
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / (2 * a);
        cout << "Roots are imaginary (complex): " << endl;
        cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
    }
    return 0;
}

