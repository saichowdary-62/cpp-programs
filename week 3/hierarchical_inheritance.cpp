#include<iostream>
using namespace std;
class TV {
    public:
        int inches;
        int price;
        void gettv() {
            cout << "Enter Price and Size of TV : ";
            cin >> price >> inches;
        }
        void showtv() {
            cout << "\nLCDTV-Details" << endl;
            cout << "Size of the TV : " << inches << " inches" << endl;
            cout << "Price : " << price << "/-" << endl;
        }  };
class manfac : public TV {
    public:
        string date;
        int warranty;
        void getm() {
            gettv();
            cout << "Enter Date and Warranty of TV : ";
            cin >> date >> warranty;    }
        void showm() {
            showtv();
            cout << "Date-of-manufacture : " << date << endl;
            cout << "Warranty : " << warranty << " years" << endl;
        }   };
class product : public TV {
    public:
        string brand;
        string country;
        void getp() {
            gettv();
            cout << "Enter Brand and Country : ";
            cin >> brand >> country;    }
        void showp() {
            showtv();
            cout << "Brand : " << brand << endl;
            cout << "Country : " << country << endl;
        }   };
int main() {
    manfac m;
    product p;
    cout << "Enter Manufacturer Details:\n";
    m.getm();
    cout << "\nEnter Product Details:\n";
    p.getp();
    cout << "\n--- Manufacturer Information ---\n";
    m.showm();
    cout << "\n--- Product Information ---\n";
    p.showp();
    return 0;
}
