#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    int numberSquares;
    cin >> m >> n;

    double area = m * n;
    double maxDominos = floor(area / 2);
    cout << maxDominos <<endl;

    return 0;
}
