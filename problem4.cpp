#include <iostream>
using namespace std;
void sumArrays(const double* arr1, const double* arr2, double* sum, int size) {
    const double* ptr=arr1;
    const double* ptr2=arr2;
    for(int i=0;i<size;i++) {
        *(sum+i)+=((*(ptr+i))+(*(ptr2+i)));
        cout<<*(sum+i)<<" ";
    }
}
int main() {
    int n;
    cout<<"Enter the size of the array (for both): ";
    cin>>n;
    double arr1[n];
    double arr2[n];
    cout<<"Enter the elements of the array 1: ";
    for(int i=0;i<n;i++) {
        cin>>arr1[i];
    }
    cout<<"Enter the elements of the array 2: ";
    for(int i=0;i<n;i++) {
        cin>>arr2[i];
    }
    double sum[n];
    sumArrays(arr1,arr2,sum,n);
}