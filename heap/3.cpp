// return k largest element in array

#include<bits/stdc++.h>
using namespace std;

void KLargestElement(int arr[], int size, int k)
{
    priority_queue<int, vector<int>, greater<int>> minh;

    for(int i = 0; i < size; i++)
    {
        minh.push(arr[i]);

        if(minh.size() > k)
        {
            minh.pop();
        }
    }

    while(minh.size() > 0)
    {
        cout << minh.top() << " ";
        minh.pop();
    }
    
}

int main(int argc, char const *argv[])
{
    int arr[6] = {7,10,4,3,20,15};
    int k = 3;
    
    cout << k << " largest element in array : ";
    KLargestElement(arr, 6, k);

    return 0;
}


