#include <bits/stdc++.h>
using namespace std;

int lengthOfString(string str) {
    return str.length();   // or return str.size();
}

int main() {
    string s = "hello world";

    int length = lengthOfString(s);

    cout << "String: " << s << endl;
    cout << "Length: " << length << endl;

    return 0;
}