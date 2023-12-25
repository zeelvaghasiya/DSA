// print like this

// n = 4
// 1 1 1 1 
//   2 2 2
//     3 3
//       4


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int row = 1; row <= n; row++)
    {
        for(int col = 1; col <= 2*n - 1; col++)
        {
            if((n+1) <= (row+col) && (row+col) <= ((n+1)+(row-1)*2))
            {
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    return 0;
}