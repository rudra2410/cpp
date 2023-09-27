#include <iostream>

using namespace std;

int  main()
{
    int x,y;

    cout<<"Enter the value :";
    cin>>x;

    
    cout<<"Enter the value :";
    cin>>y;

    if (x > 0 && y > 0)
    {
        cout<<"xy is first quadrant \n"; // ++
    }

    if (x > 0 && y < 0)
    {
        cout<<"xy is second quadrant \n"; // +-
    }

    if (x < 0 && y < 0)
    {
        cout<<"xy is third quadrant \n"; // --
    }

    if (x < 0 && y > 0)
    {
        cout<<"xy is four quadrant \n"; // -+
    }

    
}