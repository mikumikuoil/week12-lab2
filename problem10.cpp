#include <iostream>
#include <vector>
using namespace std;
int singleNum(vector<int>& v) {
        int result=0;
        for (int num:v) {
            result^=num;
        }
    return result;
    }
int main() {
    vector<int> v;
    int t;
    while (cin>>t) {
        v.push_back(t);
    }
    cout<<singleNum(v)<<endl;
    return 0;
}