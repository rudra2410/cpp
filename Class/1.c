// Program to illustrate the working of
// public and private in C++ Class

#include <iostream>
using namespace std;

    double length,breadth,height;
class Room {

   private:
    double length;
    double breadth;
    double height;

   public:

    // function to initialize private variables
    void data(double len, double brth, double hgt) {
        length = len;
        breadth = brth;
        height = hgt;
    }

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {

    // create object of Room class
    Room room1;

    // pass the values of private variables as arguments
    cout<<"ENter you length :";
    cin>>

    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}