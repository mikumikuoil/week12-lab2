#include <iostream>
using namespace std;
void power(double* n, const int* p) {
    int i=1;
    double num = *n;
    while (i<*p) {
        *n*=num;
        i++;
    }
}
int main() {
    double num;
    int p;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Enter the power: ";
    cin>>p;
    power(&num,&p);
    cout<<num<<endl;
}