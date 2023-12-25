// findout Kth smallest element in array

#include<bits/stdc++.h>
using namespace std;

int KthSmallest(int arr[], int size, int k)
{
    priority_queue<int> maxh;

    for(int i = 0; i < size; i++)
    {
        maxh.push(arr[i]);

        if(maxh.size() > k)
        {
            maxh.pop();
        }
    }
    return maxh.top();
}

int main(int argc, char const *argv[])
{
    int arr[6] = {7,10,4,3,20,15};
    int k = 3;
    
    int ans = KthSmallest(arr, 6, k);

    cout << k <<"th smallest element is : " << ans ;

    return 0;
}


