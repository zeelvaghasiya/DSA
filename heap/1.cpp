// normal heap(priority queue) functionality

#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[5] = {1,5,4,2,3};
    priority_queue<int> maxh;

    for(int i = 0; i < 5; i++)
    {
        maxh.push(arr[i]);
    }

    cout << "the elements are in decreasing order:"<<endl;
    while(maxh.size() > 0)
    {
        int ele = maxh.top();
        cout << ele << " ";
        maxh.pop();
    }

    return 0;
}


