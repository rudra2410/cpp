#include <iostream>

using namespace std;

// C++ program to demonstrate the use of default constructor :-

/*
class Wall
{
private:
    double length;

public:
    Wall()
    {
        length = 4.5;

        cout << "Creating a Wall :" << endl;
        cout << "Length : " << length << endl;
    }
};


int  main()
{
    Wall Wall1;
    return 0;
}

*/

// C++ program to calculate the area of a wall

/*

class Wall
{
    private:
    double lenght;
    double height;

    public:
    Wall(double len,double hgt)
    {
        lenght = len;
        height = hgt;
    }

    double area()
    {
        return lenght * height ;
    }



};

int main()
{
    Wall Wall1(10.25,8.2);
    Wall Wall2(2.5,11.8);
    Wall Wall3(12.45,9.5);

    cout<<"Area of wall 1 : "<< Wall1.area()<<endl;
    cout<<"Area of wall 2 : "<< Wall2.area()<<endl;
    cout<<"Area of wall 3 : "<< Wall3.area()<<endl;
}
*/

// C++ Copy Constructor  :-

class Wall
{
    private:
    double length;
    double height;

    public:

    Wall(double len,double hgt)
    {
        length = len;
        height = hgt;
    }

    Wall(Wall & obj)
    {
        length = obj.length;
        height = obj.height;
    }

    double area()
    {
        return length * height;
    }
};

int main()
{
    Wall Wall1(12.5,85.22);

    Wall Wall2 = Wall1;

    cout<<"Area of a wall 1: "<<Wall1.area()<<endl;

    cout<<"Area of a wall 2: "<<Wall2.area();

    return 0;
}
