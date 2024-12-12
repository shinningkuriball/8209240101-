
#include"源1.cpp"//为啥#include"mytemperature.h"不行啊
#include<iostream>

using namespace std;
int main() {
	cout << "Celsius\tFahreenheit\t|\tFahrenheit\tCelsius" << endl;
	for (double c = 40; c >= 31; c--) {
		double f = celsius_to_fah(c);
		cout << c << "\t" << f << "\t|\t" << f << "\t" << fahrenheit_to_cels(f) << endl;

	}
	return 0;
}