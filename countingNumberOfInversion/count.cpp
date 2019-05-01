#include <iostream>
using namespace std;
// using merge sort to count the number of inversions
// sorted array temp
// number of inversion count
// original array
int merge(int arr[], int temp[], int l, int mid, int r);

int sort(int arr[], int temp[], int l, int r) {
    int mid, count=0;
    if(r > l)
    {
        mid = (r+l)/2;

        count = sort(arr, temp, l, mid);
        count += sort (arr, temp, mid+1, r);
        count += merge(arr, temp, l, mid+1, r);
    }

    return count;
}

int merge(int arr[], int temp[], int l, int mid, int r){
    int count = 0;
    int i,j,k;
    i = l;
    j = mid;
    k = l;

    while (i < mid && j <= r)
    {
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
            count = count + (mid - i);
        }
    }

    while (i < mid)
        temp[k++] = arr [i++];

    while (j<=r)
        temp[k++] = arr[j++];


    return  count;
}

int main()
{
    int array[] = {6,5,4,2,3,1};
    int size = sizeof(array)/ sizeof(int);
    int *temp = (int *)malloc(sizeof(int) * size);

    cout<<"number of inversions = "<<sort(array, temp, 0, size-1)<<endl;

    return 0;
}