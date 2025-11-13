#include <iostream>
using namespace std;
bool is_mirrored(const int* a, const int* b, int size) {
    const int* ptr=a;
    const int* ptr2=b+size-1;
    bool flag=true;
    for(int i=0;i<size;i++) {
        if (*(ptr+i)!=*(ptr2-i)) {
            flag=false;
        }
    }
    return flag;
}
int main() {
    int n;
    cout<<"Enter size of array (for both arrays): ";
    cin>>n;
    int a[n];
    cout<<"Enter the first array elements: ";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int b[n];
    cout<<"Enter the second array elements: ";
    for(int i=0;i<n;i++) {
        cin>>b[i];
    }
    bool value=is_mirrored(a,b,n);
    if(value==true) {
        cout<<"Mirrored"<<endl;
    }
    else {
        cout<<"Not mirrored"<<endl;
    }
    return 0;
}