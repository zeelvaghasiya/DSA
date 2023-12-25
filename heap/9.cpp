// Connect ropes

#include<bits/stdc++.h>
using namespace std;

int minCost(int arr[], int size)
{
    priority_queue<int, vector<int>, greater<int>> minh;

    for(int i = 0; i < size; i++)
    {
        minh.push(arr[i]);
    }

    int cost = 0;

    while(minh.size() >= 2)
    {
        int firstBig = minh.top();
        minh.pop();
        int secondBig = minh.top();
        minh.pop();
        cost += (firstBig + secondBig);
        minh.push(firstBig+secondBig);
        // cout << firstBig << " " << secondBig << " " << cost << endl;
    }
    return cost;
}

int main(int argc, char const *argv[])
{
    int arr[5] = {1,2,3,4,5};

    int ans = minCost(arr, 5);

    cout << "minimum cost of roads is : "<< ans ;
    return 0;
}