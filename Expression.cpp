#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, arr[5], t;
    cin >> a >> b >> c;
    arr[0] = a + b * c;
    arr[1] = a *(b + c);
    arr[2] = a * b * c;
    arr[3] = (a + b) * c;
    arr[4] = a + b + c;

    int maximum = arr[0];
    for(int i = 0; i < 5; i++)
    {
        if(maximum < arr[i])
        {
            t = maximum;
            maximum = arr[i];
            arr[i] = t;
        }
    }
    cout << maximum << endl;
    return 0;
}
