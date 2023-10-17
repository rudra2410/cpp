#include <iostream>
#include <string.h>
using namespace std;

class customer
{
private:
    string name, number;

public:
    void getinformation()
    {
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~ WELCOM TO LAPINOZ PIZZA ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
        cout << "CUSTOMER NAME : ";
        cin >> name;
        cout << "CUSTOMER CONTACT NUMBER : ";
        cin >> number;
    }

    void showinformation()
    {
        cout << "\n\t---------------------------";
        cout << "\n\t Name               : " << name << endl;
        cout << "\n\t---------------------------";
        cout << "\n\t Contact Number     : " << number << endl;
        cout << "\n\t---------------------------";
    }
};

class Show_bill : public customer
{

private:
    int GST, discount, Net_bill, bill_amt = 0;
    int Bill = 0, quantity;

    string item[5];

public:
    int item1()
    {
        cout << "\n \tEnter Qunatity :";
        cin >> quantity;
        item[0] = " MARGHERITA PIZZA  = 135 ";
        return Bill = Bill + quantity * 135;
    }

    int item2() 
    {
        cout << "\n \tEnter Qunatity : ";
        cin >> quantity;
        item[1] = " GARDEN DELIGHT PIZZA = 185 ";
        return Bill = Bill + quantity * 185;
    }

    int item3()
    {
        cout << "\n \tEnter Qunatity : ";
        cin >> quantity;
        item[2] = "FARM VILLA PIZZA   = 235";
        return Bill = Bill + quantity * 235;
    }

    int item4()
    {
        cout << "\n \tEnter Qunatity : ";
        cin >> quantity;
        item[3] = "CHEEZY-7 PIZZA = 255";
        return Bill = Bill + quantity * 255;
    }

    int item5() 
    {
        cout << "\n \tEnter Qunatity : ";
        cin >> quantity;
        item[4] = "INDIAN STYLE PIZZA = 275";
        return Bill = Bill + quantity * 275;
    }

    int Show_Bill_Amt()
    {

        return bill_amt = bill_amt + Bill;
    }

    int Show_disc()
    {
        if (bill_amt > 500)
        {
            return discount = (bill_amt * 20) / 100;
        }

        else
        {
            return discount = 0;
        }       
    }

    int Show_GST()
    {
        return GST = (bill_amt * 18) / 100;
    }

    int Show_Net_bill()
    {
        return Net_bill = bill_amt + GST - discount;
    }

    void Show_Net_Bill()
    {
        
        cout << "\n\t TOTAL ORDER PRICE  : " << Show_Bill_Amt() << endl;
        cout << "\n\t---------------------------";
        cout << "\n\t GST                : " << Show_GST() << endl;
        cout << "\n\t---------------------------";
        cout << "\n\t DISCOUNT           : " << Show_disc() << endl;
        cout << "\n\t---------------------------";
        cout << "\n\t TOTAL PAY BIL      : " << Show_Net_bill() << endl;
        cout << "\n\t---------------------------";
        cout << "\n\n\tTHANK FOR YOUR VISIT"<<endl;
        cout << "\tHAVE A NICE DAY" << endl;
        cout << "\tRATE MY RESTAURANTS !"<<endl;
    }
    void Show_bill_Items()
    {

        for (int i = 0; i < 5; i++)
        {
            if (!item[i].empty())
            {
                cout << "\n\t " << i + 1 << ":" << item[i] << endl;
            }
        }
    }
};


int main()
{

    Show_bill a;

    a.getinformation();

    cout << "\n\t\t\t\t\t\t **** PIZZA MENU ***** \n";

    cout << "\n\t\t\t|---------------------------------------------------------|";
    cout << " \n \t\t\t |[1] MARGHERITA PIZZA                        : RS. 135 /- |";
    cout << " \n \t\t\t |[2] GARDEN DELIGHT PIZZA                    : RS. 185 /- |";
    cout << " \n \t\t\t |[3] FARM VILLA PIZZA                        : RS. 235 /- |";
    cout << " \n \t\t\t |[4] CHEEZY-7 PIZZA                          : RS. 255 /- |";
    cout << " \n \t\t\t |[5] INDIAN STYLE PIZZA                      : RS. 275 /- |\n";
    cout << "\t\t\t  |---------------------------------------------------------|";
    cout << " \n \t\t\t THANKS. \n";

    

    int Pizza;

    do
    {
        cout << "\n Select  Item : ";
        cin >> Pizza;
        switch (Pizza)
        {
        case 1:
            a.item1();
            break;
        case 2:
            a.item2();
            break;
        case 3:
            a.item3();
            break;
        case 4:
            a.item4();
            break;
        case 5:
            a.item5();
            break;

        case 0:
            break;

        default :
            cout << "YOu ENTER WORNG PIZZA WITH ITEM";
        }

    } while (Pizza != 0);

    a.showinformation();
    a.Show_Net_Bill();
}