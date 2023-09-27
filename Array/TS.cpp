#include <iostream>

using namespace std;

int main()
{
    int a[10], i, n, sum = 0;

    cout << "Enter size of arry =";
    cin >> n;

    cout << "Enter elements of arry =";
    for (i = 0; i <= n; i++)
    {

        cin >> a[i];
    }

    for (i = 0; i <= n; i++)
    {

        sum += a[i];
    }

    cout << "sum of arry = " << sum << " ";

    return 0;
}
