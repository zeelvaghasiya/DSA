// frequency sort

#include<bits/stdc++.h>
using namespace std;

void freqSort(int arr[], int size)
{
    unordered_map<int, int> mp;

    for(int i = 0; i < size; i++)
    {
        mp[arr[i]]++;
    }

    priority_queue<pair<int,int>> maxh;

    for(auto i = mp.begin(); i != mp.end(); i++)
    {
        maxh.push({i->second, i->first});
    }

    while(maxh.size() > 0)
    {
        int freq = maxh.top().first;
        int ele = maxh.top().second;
        maxh.pop();

        for(int i = 1; i <= freq; i++)
        {
            cout << ele << " ";
        }
    }
    
}

int main(int argc, char const *argv[])
{
    int arr[10] = {1,1,1,3,2,2,4,4,4,4};
    int k = 2;

    cout << "frequnecy sort : ";
    freqSort(arr, 10);
    return 0;
}
