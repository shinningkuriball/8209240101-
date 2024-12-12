#include<iostream>
using namespace std;

int gcd(int m, int n)
{
	int a = n;
	while (m % n != 0)
	{
		a = m % n;
		m = n;
		n = a;
	}
	return a;

}

int lcm(int m, int n) {

	return (m * n) / gcd(m, n);

}
int main() {
	/*1、输入自然数m和n，
（1）求他们的最大公约数（或称最大公因数）。
 要求输入、输出在主函数中进行，求公约数由函数实现。
（2）在函数中求最大公约数与最小公倍数。（提示：使用引用参数）*/
	int m = 0, n = 0;
	
	cin >> m>> n;
	cout << "最大公因数为：" << gcd(m, n) << endl;
	cout << "最小公因数为：" << lcm(m, n) << endl;
	return 0;

}