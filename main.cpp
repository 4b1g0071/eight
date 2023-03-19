#include<iostream>
using namespace std;

int main()
{
    int n;
    int i;
    int counter;

    while (cin >> n)
    {
        counter = 0;

        i = 1;
        while (i <= n)
        {
            if (n % i == 0)
            {
                counter = counter + 1;
            }
            i = i + 1;
        }

        if (counter == 2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}