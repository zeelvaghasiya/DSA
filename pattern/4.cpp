// print like this

// n = 4
// A 
// B C
// D E F
// G H I J


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int asc = 65;

    for(int row = 1; row <= n; row++)
    {
        for(int col = 1; col <= row; col++)
        {
            cout << (char)asc << " ";
            asc++;
        }
        cout<<endl;
    }
    return 0;
}