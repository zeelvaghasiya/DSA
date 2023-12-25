// to find the first occurence of the element in sorted(asending) array and return it's index

#include<bits/stdc++.h>
using namespace std;

int binary_search_first(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int index;

    while(start <= end)
    {
        int mid = start + (end - start)/2;

        if(arr[mid] == key)
        {
            index = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return index;
}

int binary_search_last(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int index;

    while(start <= end)
    {
        int mid = start + (end - start)/2;

        if(arr[mid] == key)
        {
            index = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return index;
}

int main()
{
    int arr[] = {1,3,10,10,10,45,45,47,67,78};
    int n = sizeof(arr)/sizeof(arr[0]);    
    int key = 10;
    int first_occ = binary_search_first(arr,n,key);
    int last_occ = binary_search_last(arr,n,key);

    cout << "the total occurence of the element is : "<<(last_occ-first_occ+1)<<endl;

    return 0;
}
