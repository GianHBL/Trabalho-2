#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
using namespace std;

int main () {

  double e;
  double n = 1;
  int a;
  double f = 1;
  double aux;
  int y = 0;

  cout << "Digite a quantidade de termos desejados para o cálculo" << endl;
  cin >> a;

  int x[a];

  for (int i = 1; i<a-1; i++){
    aux = i;
    x[i] = aux;

  }
  for (int i = 0; i<a; i++) {
    for (aux=1; aux<=x[i]; aux++) {
      f *= aux;
	}
    while (y<1){
		y++;
		n += f;
        }
  }

	cout.precision(2);
	cout << fixed << n << endl;

  return 0;
}