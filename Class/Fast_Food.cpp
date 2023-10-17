#include <iostream>
#include <string>

using namespace std;

class Customer
{
private:
    string name;
    int number;

public:
    void getinfo()
    {
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ WELCOME TO FACEBOOK FAST FOOD ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout << "\n";
        cout << "ENTER CUSTOMER NAME  :- ";
        cin >> name;
        cout << "ENTER CUSTOMER NUMBER  :- ";
        cin >> number;
    }

    void showinfo()
    {
        cout << "\n\t  Name                    :" << name << endl;
        cout << "\n\t  CUSTOMER NUMBER         :" << number << endl;
    }
};

class show_bill : public Customer
{
private:
    int gst, discount, netbill, billamt = 0;
    int bill = 0, quantity;

    string item[5];

public:
    int item1()
    {
        cout << "\n\t  Enter Quantity :";
        cin >> quantity;
        item[0] = "SAMOSA  =  20";
        return bill = bill + quantity * 20;
    }
    int item2()
    {
        cout << "\n\t  Enter Quantity :";
        cin >> quantity;
        item[1] = "PUFF  =  15";
        return bill = bill + quantity * 15;
    }
    int item3()
    {
        cout << "\n\t  Enter Quantity :";
        cin >> quantity;
        item[2] = "VADAPAV =  20";
        return bill = bill + quantity * 20;
    }
    int item4()
    {
        cout << "\n\t  Enter Quantity :";
        cin >> quantity;
        item[3] = "CALL DRINK  =  100";
        return bill = bill + quantity * 100;
    }
    int item5()
    {
        cout << "\n\t  Enter Quantity :";
        cin >> quantity;
        item[4] = "BERGER  = 30";
        return bill = bill + quantity * 30;
    }

    int Show_bill()
    {
        return billamt = billamt + bill;
    }


    int Show_discount()
    {
        if (billamt > 500)
        {
            return discount = (billamt * 20) / 100;
        }

        else
        {
            return discount = 0;
        }
    }

    int Show_gst()
    {
        return gst = (billamt * 2) / 100;
    }

    int Show_netbill()
    {
        return netbill = billamt + gst - discount;
    }

    void Show_netBill()
    {
        cout << "\n\t TOTAL ORDER PRIZE  :" << Show_bill() << endl;
        cout << "\n\t GST                :" << Show_gst() << endl;
        cout << "\n\t DISCOUNT           :" << Show_discount() << endl;
        cout << "\n\t TOTAL PAY OF BILL  :" << Show_netbill() << endl;
        cout << "\n\n\t  THANK FOR YOUR VISIT" << endl;
        cout << "\t HAVE A NICE DAY " << endl;
        cout << "\t RATE MY FAST FOOD" << endl;
    }

    void Show_bill_item()
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
    show_bill a;

    a.getinfo();

    cout << "\n\t\t\t\t\t  ***** FAST FOOD MENU ***** \n";

    cout << "\n\t\t\t |[1] SAMOSA                    :RS.20 /-|";
    cout << "\n\t\t\t |[2] PUFF                      :RS.15 /-|";
    cout << "\n\t\t\t |[3] VADAPAV                   :RS.20 /-|";
    cout << "\n\t\t\t |[4] CALL DRINK                :RS.100/-|";
    cout << "\n\t\t\t |[5] BERGER                    :RS.30 /-|";

    cout << " \n \t\t\t YOUR ORDER IS CONFROM ! \n";

    int fast_food;

    do
    {
        cout << "\n ENTER YOUR FAST FOOD";
        cin >> fast_food;

        switch (fast_food)
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
        }

        } while (fast_food != 0);

        a.showinfo();
        a.Show_netbill();
}
