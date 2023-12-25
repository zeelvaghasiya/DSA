// sort a K sorted array;

#include<bits/stdc++.h>
using namespace std;

void sortArray(int arr[], int size, int k)
{
    priority_queue<int, vector<int>, greater<int>> minh;

    for(int i = 0; i < size; i++)
    {
        minh.push(arr[i]);

        if(minh.size() > k)
        {
            cout << minh.top() << " ";
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
    int arr[7] = {6,5,3,2,8,10,9};
    int k = 3;

    cout << "after the sorting the element look like as : "<<endl;
    sortArray(arr, 7, k);
    return 0;
}
