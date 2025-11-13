#include <iostream>
using namespace std;
int evenCount(const int* a, int size) {
    int count=0;
    const int* ptr=a;
    for(int i=0;i<size;i++) {
        if(*(ptr+i)%2==0) {
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++) {
        cin>>*(a+i);
    }
    cout<<"Number of even elements: "<<evenCount(a,n);
}