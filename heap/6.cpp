// top K frequent number

#include<bits/stdc++.h>
using namespace std;

void topKFreq(int arr[], int size, int k)
{
    unordered_map<int, int> mp;

    for(int i = 0; i < size; i++)
    {
        mp[arr[i]]++;
    }

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minh;

    for(auto i = mp.begin(); i != mp.end(); i++)
    {
        minh.push({i->second, i->first});

        if(minh.size() > k)
        {
            minh.pop();
        }
    }

    while(minh.size() > 0)
    {
        cout << minh.top().second << " ";
        minh.pop();
    }
    
}

int main(int argc, char const *argv[])
{
    int arr[10] = {1,1,1,3,2,2,4,4,4,4};
    int k = 2;

    cout << "top " << k << " frequent element : ";
    topKFreq(arr, 10, k);
    return 0;
}
