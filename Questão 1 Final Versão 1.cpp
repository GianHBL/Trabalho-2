#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
using namespace std;

int main () {

  double n = 1;
  int a;
  double f = 1;
  double aux;
  int y = 0;

  cout << "Digite a quantidade de termos desejados para o cálculo" << endl;
  cin >> a;

  int x[a];

  for (int i = 0; i<a-1; i++){
    aux = i+1;
    x[i] = aux;

  }
  for (int i = 0; i<a-1; i++) {
    for (aux=i+1; aux<=x[i]; aux++) {
      f *= aux;
        while (y<aux){
          y++;
          n += 1/f;
        }
  }
  }
  cout << setprecision(10000) << n << endl;
}
    