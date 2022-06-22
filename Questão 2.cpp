#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
    int n = 0;
    int e1 = 1;
    int e2 = 3;
    long double x = 0;
    long double s1 = 0;
    long double s2 = 0;
    long double sf = 0;
    long long int fac1 = 1;
    long long int fac2 = 6;
    long long int fac3 = 24;
    long long int fac4 = 6;
    long double pi = 3.141592653589;

    cout << "Insira o valor do ângulo" << endl;
    cin >> x;
    cout << "Insira o parâmetro de precisão (1 à 16.)" << endl;
    cin >> n;

    x = (x*pi)/180;

    for (int i = 0; i < n; i++) {
        s1 = s1 + (pow(x,e1))/fac1;
        for(int j = 0; j <= 3; j++){
          e1++;
          fac1 *= e1;
        }

        s2 = s2 + (pow(x,e2))/fac2;
        for(int j = 0; j <= 3; j++){
          e2++;
          fac2 *= e2;
        }
    }

    sf = s1 - s2;

    e1 = e1 + 3;

    for (int i = 0; i < n; i++) {
        s1 = s1 + (pow(x,e1))/fac3;
        for(int j = 0; j <= 3 ; j++){
          e1++;
          fac1 *= e1;
        }

        s2 = s2 + (pow(x,e2))/fac4;
        for(int j = 0; j <= 1; j++){
          e2++;
          fac2 *= e2;
        }
    }
  

    cout << setprecision(10000) << sf << endl;
    return 0;
}
