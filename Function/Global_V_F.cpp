#include <iostream>

using namespace std;

int total = 0,math,eng,guj;
float per;

void myloop1() 
// No Return --> No Arugument
{
    cout<<"enter Math mark:";
    cin>>math;
    
    cout<<"enter Eng mark:";
    cin>>eng;
    
    cout<<"enter guj mark:";
    cin>>guj;

}

float myloop2()
{
    if (math <35 || eng <35 || guj <35 )
    {
        cout<<"student is fail";
    }

    else

    {
        total = math + eng + guj ;

        per = total * 100 / 400;
    }
    
    
}

void myloop3()
{
    cout<<"\n total marks : " << total;
    cout<<"\n percentage : ",per;

    if (per >= 90)
    {
        cout<<"grade A";
    }
    else if (per >= 70 && per <= 90)
    {
        cout<<"grade B";
    }
    else if (per >= 50 && per <= 70)
    {
        cout<<"grade C ";
    
    }
    else if (per >=35 && per <= 50)
    {
        cout<<"grade d";
    }
    else
    {
        cout<<"student is fail";
    }
    
}

int main()
{
    myloop1();
    myloop2();
    myloop3();

    return 0;
}