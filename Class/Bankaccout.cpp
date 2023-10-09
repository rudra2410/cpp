#include <iostream>
using namespace std;

class bankaccount
{
    int deposite, balance, withdral, total;


public:
    bankaccount(int d, int b, int w, int t)
    {
        deposite = d;
        balance = b;
        withdral = w;
        total = t;
    }
    void bal() // deposit amount
    {
        int d, b;
     
        cout << "---------------------------------\n";
        cout << "|";
        cout << " Your Account Balance is= 1000"
             << " |\n";
        cout << "---------------------------------\n";
        cout << "Enter Deposit Amount = ";
        cin >> d;
        b = 1000 + d;
        cout << "Your Total Amount = " << b;
        cout << "\n---------------------------------\n";
    }

    void with() // withdral amount
    {
        int b, w;
        cout << "Enter Withdral Amount = ";
        cin >> w;
        if (b <= w)
        {
            cout << "\n==> You Cannot withdral";
        }

        else //(b >= w)
        {
            cout << "\n==> You Can withdral";
        }
    }
};

int main()
{
    int a, b, c, d;
    bankaccount b1(a, b, c, d);
    b1.bal();
    b1.with();

    return 0;
}