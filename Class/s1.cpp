#include <iostream>

using namespace std;

class student
{
    int admno;
    char name[20];
    float eng,math,sci,total;

    float ctotal()
    {
        return eng + math + sci;
    }

    public:
    student()
    {
        cout<<"ENter student no :";
        cin>>admno;
        
        cout<<"ENter student name:";
        cin>>name;
        
        cout<<"ENter student english mark :";
        cin>>eng;
        
        cout<<"ENter student math mark :";
        cin>>math;
        
        cout<<"ENter student sci mark:";
        cin>>sci;
        
    }

    ~student()
    {
        cout<<"student"<<name<<" Object is being destructed";
    }

    void showdata()
    {
        cout<<"\n student no :"<<admno;
        cout<<"\n student name is :"<<name;
        cout<<"\neng\tmath\tsci\ttotal";
        cout<<"n"<<eng<<"\t"<<math<<"\t"<<sci<<"\t"<<total;
    }
};

int main()
{
    student s1,s2;

    s1.showdata();
    s2.showdata();
  
}