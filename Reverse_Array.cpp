#include <iostream>
using namespace std;

void swapElements(int* arr, int i, int n) {
    int temp = arr[i];
    arr[i] = arr[n];
    arr[n] = temp;
}

int fun(int *arr,int i,int n)
{
    if(i>=n) return 0;
    fun(arr,i+1,n-1);
    swapElements(arr, i, n);
   
}

int main() {
    int arr[]={1,2,3,4,5};
    int size=5;
    fun(arr,0,size-1);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
