// K closest point to origin
// d(square) = x(square) + y(square)

#include<bits/stdc++.h>
using namespace std;

void KCloseOrigin(int arr[][2], int size, int k)
{
    priority_queue<pair<int,pair<int,int>>> maxh;

    for(int i = 0; i < size; i++)
    {
        maxh.push({(arr[i][0]*arr[i][0]+arr[i][1]*arr[i][1]),{arr[i][0],arr[i][1]}});
        if(maxh.size() > k)
        {
            maxh.pop();
        }
    }

    while(maxh.size() > 0)
    {
        pair<int, int> p = maxh.top().second;
        cout << "(" << p.first << "," << p.second << ")" << endl;
        maxh.pop();
    }
    
}

int main(int argc, char const *argv[])
{
    int arr[4][2] = {{1,3},{-2,2},{5,8},{0,1}};
    int k = 2;

    cout << k <<  " closest points are : "<<endl;
    KCloseOrigin(arr, 4, k);
    return 0;
}
