#include <iostream>

using namespace std;

class bankaccout
{
    int deposite;
    int balance;
    int withdral;
    int total;

    public:
    bankaccout(int d,int b,int w,int t)
    {
        deposite = d;
        balance = b;
        withdral = w;
        total = t;
    }

    void balanca()
    {
        int d , b ;
        cout << "----------------------------------------\n";
        cout << "Your Acoout balance is = 1000";
        cout << "\n";
        cout << "----------------------------------------\n";
        cout << "Enter YOur Deposite =";
        cin  >> d;
        b = 1000 + d;
        cout << "YOur Total Amout = "<<b;
        cout << "\n--------------------------------------\n";
    }

    void Withdral()
    {
        int b ,w;
        cout << "ENter WIthdral Amount = ";
        cin >> w ;

        if (b <= w)
        {
            cout << "\n==> YOu Cannot Withdral";
        }

        else
        {
            cout << "\n==> YOu Can Withdral";
        }
        
    }
};


int main()
{
    int a,b,c,d;
    bankaccout b1(a,b,c,d);

    b1.balanca();
    b1.Withdral();

    return 0;
}