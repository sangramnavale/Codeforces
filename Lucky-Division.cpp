#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool flag = false;
    int arr[13] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 747, 774, 777};
    for(int i = 0; i < 12; i++ )
    {
        if(n % arr[i] == 0)
        {
            flag = true;
        }
    }
    if(flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
