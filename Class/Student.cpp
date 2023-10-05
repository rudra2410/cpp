#include <iostream>
using namespace std;

class student
{
private:
    int eng, hin, guj, math, total;
    string name;
    float per;

public:
    void setname(string n)
    {
        name = n;
    }
    void setmarks(int e, int h, int g, int m)
    {
        eng = e, hin = h, guj = g, math = m;
    }
    int totalmarks(int e, int h, int g, int m)
    {
        total = e + h + g + m;
        return total;
    }

    int percentage(int total)
    {
        per = total * 100 / 400;
        return per;
    }

    void getname()
    {

        cout << name << endl;
    }

    void getmarks()
    {
        cout << eng << "\n"
             << hin << "\n"
             << guj << "\n"
             << math << endl;
    }
};

int main()
{
    int eng[5], hin[5], guj[5], math[5], total[5];
    string name[5];
    float per[5];

    for (int i = 0; i <= 1; i++)
    {

        cout << "Enter Your Name:";
        cin >> name[i];

        cout << "Enter ENGLISH Mark:";
        cin >> eng[i];

        cout << "ENter Hindi Mark :";
        cin >> hin[i];

        cout << "Enter Gujarati Mark :";
        cin >> guj[i];

        cout << "Enter Math Marks : ";
        cin >> math[i];

    }
    
    student s1;

    s1.setname(name[0]);
    s1.setmarks(eng[0], hin[0], guj[0], math[0]);

    s1.getname();
    s1.getmarks();

    student s2;
    s2.setname(name[1]);
    s2.setmarks(eng[1], hin[1], guj[1], math[1]);

    s2.getname();
    s2.getmarks();

    for (int i = 0; i <= 1; i++)
    {
        total[i] = s1.totalmarks(eng[i], hin[i], guj[i], math[i]);
        cout << "Total:" << total[i] << endl;
        per[i] = s1.percentage(total[i]);
        cout << "Percentage:" << per[i] << endl;
    }
    
    return 0;
}