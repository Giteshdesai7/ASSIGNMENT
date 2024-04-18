#include<iostream>
using namespace std;
void swap(int arr[], int pos1, int pos2){
    int temp;
    temp=arr[pos1];
    arr[pos1]=arr[pos2];
    arr[pos2]=temp;
}
int partition(int arr[], int low, int high, int pivot ){
    int a=low;
    int b=low;
    while(a<=high){
        if(arr[a]>pivot){
            a++;
        }
        else{
            swap(arr, a, b);
            a++;
            b++;
        }
    }
    return b-1;
}
void quicksort(int arr[], int low, int high){
    if (low < high){
        int pivot=arr[high];
        int pos= partition(arr, low, high, pivot);
        quicksort(arr, low, pos-1);
        quicksort(arr, pos+1, high);
    }
}
int main(){
    int x;
    cout<<"Enter the Size of Array";
    cin>>x;
    cout<<"Enter the elemnt of array";
    int arr[x];
    for(int a=0; a<x; a++){
        cin>>arr[a];
    }
    quicksort(arr, 0, x-1);
    cout<<"the Second array is";
    for (int a = 0; a < x; a++)
    {
        cout<<arr[a]<< "\t";
    }
    

    }