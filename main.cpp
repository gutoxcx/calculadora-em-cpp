#include <iostream>
using namespace std;

int soma(double n1, double n2);
int subtracao(double n1, double n2);
int multiplicacao(double n1, double n2);
int divisao(double n1, double n2);
double resto(int n1, int n2);

int main() {
	double n1, n2;
	
	cout << "digite seus numeros, n1 e n2: ";
	cin >> n1;
	cin >> n2;
	
	cout << "Soma: " << soma(n1, n2) << endl;
	cout << "Subtração: " << subtracao(n1, n2) << endl;
	cout << "Multiplicação: " << multiplicacao(n1, n2) << endl;
	cout << "Divisão: " << divisao(n1, n2) << endl;
	cout << "Resto: " << resto(n1, n2) << endl;
}

int soma(double n1, double n2) {
	double resultado = n1 + n2;
	return resultado;
}
int subtracao(double n1, double n2) {
	double resultado = n1 - n2;
	return resultado;
}
int multiplicacao(double n1, double n2) {
	double resultado = n1 * n2;
	return resultado;
}
int divisao(double n1, double n2) {
	double resultado = n1 / n2;
	return resultado;
}
double resto(int n1, int n2) {
	double resultado = n1 % n2;
	return resultado;
}
