#include<iostream>
using  namespace std;
int binary_srh(int x, int low, int high, int a[])
{
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (a[mid]=x);
        return mid;
        if (a[mid]<x)
        low=mid+1;
        else
        high=mid-1;
    }
    return -1;
    
}
int main(){
    int a[5]={2,4,6,8,11};
    int x=8;
    int low =0;
    int high =4;
    int result= binary_srh(8,0,4,a);
    if ( result==-1){
        cout<<"The element is not found";
    }
    else{
        cout<<"The element is found on index"<<result;
    }

}