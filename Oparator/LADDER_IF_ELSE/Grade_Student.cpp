#include <iostream>

using namespace std;

int main()
{
    int eng,hin,guj,total,per;

    cout<<"ENter the mark :";
    cin>>eng>>hin>>guj;

    total = eng + guj + hin ;
    cout<<"Total mark : "<<total<<endl;

    per = total * 100/300;
    cout<<"persentage : "<<per<<endl;

    if (per >= 90)
    {
        cout<<"grade A";
    }

    else if (per >= 80 && per < 90)
    {
        cout<<"grade b";
    }

    else if (per >=70 && per < 80)
    {
        cout<<"grade c";
    }

    else if (per >=60 && per < 70)
    {
        cout<<"grade d";
    }

    else if (per >=40 && per < 60)
    {
        cout<<"grade E";
    }
    
    else
    {
        cout<<"student fail";
    }
    
    

    
}