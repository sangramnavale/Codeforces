#include<iostream>
using namespace std;

int main()
{
    int n, p[n];
    double v, sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for(int i = 0; i < n; i++)
    {
        sum = sum + p[i];
        v = sum / n;
    }
    cout.precision(12);
    cout << fixed << v << endl;
    return 0;
}
