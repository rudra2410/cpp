#include <iostream>

using namespace std;
int a = 0;

int main()
{
cout<<"ENter number";
cin>>a;

switch (a)
{
case 1:
    cout<<"User ENter ONe Value";
    break;
case 2:
    cout<<"User ENter two Value";
    break;
case 3:
    cout<<"User ENter three Value";
    break;
case 4:
    cout<<"User ENter four Value";
    break;
case 5:
    cout<<"User ENter five Value";
    break;

default:
    cout<<"User enter worng value";
    break;
}
    return 0;
}