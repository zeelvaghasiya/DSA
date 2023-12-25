// print like this

// n = 4
// D 
// C D
// B C D
// A B C D


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int row = 1; row <= n; row++)
    {
        int start = 'A' + n - row;
        for(int col = 1; col <= row; col++)
        {
            cout << (char)start << " ";
            start++;
        }
        cout<<endl;
    }
    return 0;
}