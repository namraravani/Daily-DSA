#include <bits/stdc++.h> 

int qs(vector<int> &arr,int low,int high)
{
    int pivot = arr[low];

    int i = low;
    int j = high;

    while(i<j)
    {
        while(arr[i]<=pivot && i<=high-1)
        {
            i++;
        }

        while(arr[j]>pivot && j>=low+1)
        {
            j--;
        }

        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[low],arr[j]);

    return j;
}

void QuickSort(vector<int> &arr,int low,int high)
{
    if(low>=high)
    {
        return;
    }
    int partition = qs(arr,low,high);
    QuickSort(arr,low,partition-1);
    QuickSort(arr,partition+1,high);



}
vector<int> quickSort(vector<int> arr)
{
    // Write your code here.
    
    QuickSort(arr,0,arr.size()-1);

    return arr;
}
