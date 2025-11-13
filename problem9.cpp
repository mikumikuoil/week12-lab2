#include <iostream>
using namespace std;
void normalize(string &str) {
    if (str[0]>'a' && str[0]<'z') {
        str[0] -=32;
    }
    for (int i = 1; i < str.length(); i++) {
        if (str[i]>='A' && str[i]<='Z') {
            str[i] +=32;
        }
    }
}
int main() {
    string str;
    cout<<"Enter string: ";
    cin>>str;
    normalize(str);
    cout<<"Normalized string: "<<str<<endl;

}