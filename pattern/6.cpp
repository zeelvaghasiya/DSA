// print like this

// n = 6
//           *
//         * *
//       * * *
//     * * * *
//   * * * * *
// * * * * * *


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
            if(row + col > n)
            {
                cout<<"*"<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}