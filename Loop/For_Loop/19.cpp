#include  <iostream>

using namespace std;

int main()
{
    int i,n,a=0,b=1,c;

    cout<<"Enter the value :";
    cin>>n;

    c = a + b;
    cout<<" "<<c;

    for ( i = 0; i <=n; i++)
    {
        c = a + b;
        cout<<" "<<c;
        a = b;
        b = c;
    }
  
}