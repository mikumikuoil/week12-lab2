#include <iostream>
using namespace std;
void swap(int* arr1, int* arr2, int size) {
    int temp;
    for(int i=0;i<size;i++) {
        temp=*arr2;
        *arr2=*arr1;
        *arr1=temp;
        arr1++;
        arr2++;
    }
}
int main() {
    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    int a[n];
    int b[n];
    cout<<"Enter elements of array 1: ";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<"Enter elements of array 2: ";
    for(int i=0;i<n;i++) {
        cin>>b[i];
    }
    swap(a,b,n);
    cout<<"Array 1 after the swap; ";
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Array 2 after the swap; ";
    for(int i=0;i<n;i++) {
        cout<<b[i]<<" ";
    }
}