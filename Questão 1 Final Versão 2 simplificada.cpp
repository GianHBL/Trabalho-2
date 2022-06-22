#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    long double e = 1;
    unsigned long long int fac = 1;
    for (int i = 0; i < n; i++) {
        e = e + 1.0/fac;
        fac*=i+2;
    }
    cout << setprecision(100) << fixed << e << endl;
    return 0;
}