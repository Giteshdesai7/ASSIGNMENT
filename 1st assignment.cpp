//write a program for recursive binary search
#include<iostream>
using namespace std;
int binary_search(int x, int low, int high, int a[])
{
    if(high>=low)
    { int mid=(high+low)/2;
                 if (a[mid]==x)
                    return mid;
                 else if (a[mid]>x){
                 return binary_search(x, low, mid-1, a);
                 }
                 else{
                 return binary_search(x, mid+1, high, a);
                 }
    }
    else
    return -1;
}
int main()
{
    int a[5]={2, 5, 6, 9, 12};
    // int x=5;
    int low=0;
    int high=4;
    int result=binary_search(5, 0, 4, a);
    if (result==-1)
    {
        cout<<"The elenent is not found";
    }
    else
    {
        cout<<"The element is found on index"<<result;
    }
    return 0;
}