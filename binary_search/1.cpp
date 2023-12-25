// to find element in sorted(asending) array

#include<bits/stdc++.h>
using namespace std;

bool binary_search(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;

    while(start <= end)
    {
        int mid = start + (end - start)/2;

        if(arr[mid] == key)
        {
            return true;
        }
        if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1,3,6,10,23,45,47,67,78};
    int n = sizeof(arr)/sizeof(arr[0]);    
    int key = 78;
    int check = binary_search(arr,n,key);

    if(check)
    {
        cout << "key is present in array"<<endl;
    }
    else{
        cout << "key is not present"<<endl;
    }

    return 0;
}
