// print like this

// n = 3
// A A A 
// B B B
// C C C


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int row = 1; row <= n; row++)
    {
        for(int col = 1; col <= n; col++)
        {
            cout << (char)('A'+ row - 1) <<" ";
        }
        cout<<endl;
    }
    return 0;
}