#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cout << "Number ";
    cin >> n;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Non Prime Number" << endl;
            break;
        }
    }

    if(n <= 1)
    {
        cout<<"Non Prime Number"<<endl;
    }

    if (i == n)
    {
        cout << "Prime Number" << endl;
    }

    return 0;
}