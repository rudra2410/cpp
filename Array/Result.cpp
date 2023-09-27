#include <iostream>

using namespace std;

int main()
{
    int Eng[5], Hin[5], Guj[5], total[5], per[5], grade[5];
    int i;

    for (i = 0; i < 2; i++)
    {
        cout << "Enter Student Marks ?\n", i + 1;

        cout << "Enter English Marks = ";
        cin >> Eng[i];

        cout << "Enter Hindi Marks =";
        cin >> Hin[i];

        cout << "Enter Gujarati Marks =";
        cin >> Guj[i];

        total[i] = Eng[i] + Hin[i] + Guj[i];

        per[i] = (total[i] * 100) / 300;

        cout << "\n --------------------------------------------------- \n";
    }

    cout << "\n No.\tEng\tHin\tGuj\ttotal\tper\tgrade\n";

    for (i = 0; i < 2; i++)
    {
        cout << i + 1 << Eng[i] << Hin[i] << Guj[i] << total[i] << per[i] << grade[i];

        if (per[i] <= 35)
        {
            cout << "Student Fail";
        }

        else if (per[i] >= 90)
        {
            cout << "Grade A";
        }

        else if (per[i] >= 80 && per[i] < 90)
        {
            cout << "Grade B";
        }

        else if (per[i] >= 70 && per[i] < 80)
        {
            cout << "Grade C";
        }

        else if (per[i] >= 50 && per[i] < 70)
        {
            cout << "Grade D ";
        }

        else
        {
            cout << "Grade E";
        }
    }

    return 0;
}