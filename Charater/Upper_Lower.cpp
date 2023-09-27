#include <iostream>

using namespace std;

int main()
{
    char upper , lower;
    int ascii;

    cout<<"ENter the uppercase char :";
    cin>>upper;
    ascii = upper + 32;
    cout<<"\n  upper in lower is = "<<upper<<" "<<ascii;

    cout<<"ENter the lowercase char :";
    cin>>lower;
    ascii = lower - 32;
    cout<<"\n  lower in upper is = "<<lower<<" "<<ascii;

}
