// print like this

// n = 4
// A 
// B B
// C C C
// D D D D


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int row = 1; row <= n; row++)
    {
        for(int col = 1; col <= row; col++)
        {
            cout << (char)('A'+ row - 1) <<" ";
        }
        cout<<endl;
    }
    return 0;
}