// to find element in array order is not given

#include<bits/stdc++.h>
using namespace std;

bool binary_search_des(int arr[], int size, int key){
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

bool binary_search_ase(int arr[], int size, int key){
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
    int arr[] = {78,67,47,45,23,10,6,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);    
    int key = 1;
    bool check;

    if(arr[0] < arr[1])
    {
        check = binary_search_ase(arr,n,key);
    }
    else{
        check = binary_search_des(arr,n,key);
    }

    if(check)
    {
        cout << "key is present in array"<<endl;
    }
    else{
        cout << "key is not present"<<endl;
    }

    return 0;
}
