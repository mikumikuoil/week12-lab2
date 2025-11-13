#include <iostream>
using namespace std;
bool is_in(const int* arr1, const int* arr2, int size1, int size2) {
    const int *p1 = arr1;
    const int *p2 = arr2;
    bool flag = false;
    for(int i=0;i<size1;i++) {
        flag=false;
        for(int j=0;j<size2;j++) {
            if (*(p1+i)==*(p2+j)) {
                flag = true;
            }
        }
    }
    return flag;
}
int main() {
    int n;
    int n1;
    cout<<"Enter number of elements in array 1: ";
    cin>>n;
    cout<<"Enter elements in array 1: ";
    int arr1[n];
    for(int i=0;i<n;i++) {
        cin>>arr1[i];
    }
    cout<<"Enter number of elements in array 2: ";
    cin>>n1;
    int arr2[n1];
    cout<<"Enter elements in array 2: ";
    for(int i=0;i<n1;i++) {
        cin>>arr2[i];
    }
    bool value=is_in(arr1,arr2,n,n1);
    if(value==true) {
        cout<<"1";
    }
    else {
        cout<<"0";
    }

}