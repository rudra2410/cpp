#include <iostream>

using namespace std;

// Object and Class in C++ Programming :-
/*
class Room
{
    public:
    double length;
    double breadth;
    double height;

    double Area()
    {
        return length * breadth ; 
    }

    double volume()
    {
        return length * breadth * height ;
    }
};

int main()
{
    Room myroom;

    myroom.length= 40.22;
    myroom.breadth= 62.22;
    myroom.height=20.22;

    cout << "Area Of Room :  " << myroom.Area() << endl;
    
    cout << "Volume Of Room : " << myroom.volume() << endl;

    return 0;
}
*/

// Using public and private in C++ Class  :- 



class Room
{
    private:
        double length;
        double breath;
        double height;
    

    public:
        
        void initdata(double len,double brth,double hgt)
        {
            length = len;
            breath = brth;
            height = hgt;
        }

    double Area()
    {
        return length * breath ; 
    }

    double volume()
    {
        return length * breath * height ;
    }
};

int main()
{
    Room myroom ;

    myroom.initdata(42.20,42.85,21.82);

    cout << "Area Of Room :  " << myroom.Area() << endl;
    
    cout << "Volume Of Room : " << myroom.volume() << endl;

    return 0;
}

