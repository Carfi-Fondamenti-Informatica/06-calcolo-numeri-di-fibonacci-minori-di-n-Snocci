#include <iostream>
using namespace std;

int main() {
    int a=0, b=1, n, F;
    cin >> n;
    F=n;
    while(b<F) {

        n=a;
        a=b;
        cout << b<<endl;
        b=n+a;
    }
