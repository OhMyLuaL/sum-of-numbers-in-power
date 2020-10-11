#include<iostream>

using namespace std;

int main()
{

    double a;
    int n;
    cin >> a >> n;
    double sum = 1, an = 1;

    for (int i = 1; i <= n; i++)
    {
        an *= a;
        sum += an;
    }
    cout << sum;
}