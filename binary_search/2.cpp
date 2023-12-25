// to find element in sorted(desending) array

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
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return false;
}

int main()
{
    int arr[] = {78,67,47,45,23,10,6,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);    
    int key = 2;
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
