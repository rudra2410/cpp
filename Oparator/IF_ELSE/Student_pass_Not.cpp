#include <iostream>

using namespace std;

int main()
{
    int eng,guj,ba,total;
    float per;

    cout<<"Enter marks of eng :";
    cin>>eng;

    
    cout<<"Enter marks of ba :";
    cin>>ba;

    
    cout<<"Enter marks of guj :";
    cin>>guj;

    total = eng + guj + ba;
    cout<<"\n total marks = "<<total;

    if (eng >=60 && ba >=60 && guj >=60)
    {
        cout<<"\n student is pass";
        per= total /3;
        cout<<"\n percentage of student = "<< per;
    }

    else
    {
        cout<<"student is fail"<<endl;
    }
    
    
}