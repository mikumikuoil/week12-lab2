#include <iostream>
using namespace std;
int main() {
    const int SIZE=10;
    float *ptr, arr[SIZE];
    ptr=arr;
    cout<<"Enter grades for 10 students: "<<endl;
    for(int i=0;i<SIZE;i++) {
        cin>>*(ptr+i);
        *(ptr+i)*=0.3;
    }
    cout<<"Grades: "<<endl;
    for(int i=SIZE-1;i>=0;i--) {
        cout<<*(ptr+i)<<endl;
    }
    return 0;
}