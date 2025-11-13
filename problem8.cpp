#include <iostream>
#include <vector>
using namespace std;
vector<int> addOne(vector<int> &v) {
    int carry = 1;
    int i = 0;
    while (i < v.size() && carry > 0) {
        int sum = v[i] + carry;
        v[i] = sum % 10;
        carry = sum / 10;
        i++;
    }
    if (carry > 0)
        v.push_back(carry);
    return v;
}
int main() {
    vector<int> v;
    int num;
    cout << "Enter digits (right to left)(stop: -1): ";
    while (cin >> num && num != -1) {
        v.push_back(num);
    }
    vector<int> result = addOne(v);
    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }
    cout << endl;
    return 0;
}
