#include <iostream>

using namespace std;

int main()
{
    char i ;

    cout<<"Enter the chareater :";
    cin>>("%c",&i);

    if (i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U' || i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' )
    {
        cout<<"THis Char is wovel char ";
    }

    else
    {
        cout<<"THis Char is constent char ";
    }
    
    
}