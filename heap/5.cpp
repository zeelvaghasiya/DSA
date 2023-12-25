// k closest number

#include<bits/stdc++.h>
using namespace std;

void KClosestNum(int arr[], int size, int k, int x)
{
    priority_queue<pair<int,int>> maxh;

    for(int i = 0; i < size; i++)
    {
        maxh.push({abs(arr[i]-x),arr[i]});

        if(maxh.size() > k)
        {
            maxh.pop();
        }
    }

    while(maxh.size() > 0)
    {
        cout << maxh.top().second << " ";
        maxh.pop();
    }
    
}

int main(int argc, char const *argv[])
{
    int arr[5] = {5,6,7,8,9};
    int k = 3;
    int x = 7;

    cout << k << " closest numbers are : "<<endl;
    KClosestNum(arr, 5, k, x);
    return 0;
}
