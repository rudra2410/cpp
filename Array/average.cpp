#include <iostream>

using namespace std;

int main()
{

    int marks[10], i, n, sum = 0;
    double average;

    cout << "Enter number of elements: ";
    cin >> n;

    for (i = 0; i < n; ++i)
    {
        cout << "Enter number : "<< i + 1 << " ";
        cin>>marks[i];

        sum += marks[i];
    }

    average = (double)sum / n;

    cout << "Average = " <<  average << " ";

    return 0;
}