// sum of element

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
    int arr[6] = {1,3,12,5,15,11};
    int k1 = 3;
    int k2 = 6;
    int sum = 0;

    int k1Smallest = KthSmallest(arr, 6, k1);
    int k2Smallest = KthSmallest(arr, 6, k2);

    for(int i = 0; i < 6; i++)
    {
        if(arr[i] > k1Smallest && arr[i] < k2Smallest)
        {
            sum += arr[i];
        }
    }

    cout << "sum of element which is located between k1th smallest and k2th smallest is : " << sum ;
    return 0;
}
