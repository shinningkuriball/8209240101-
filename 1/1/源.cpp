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
	/*1��������Ȼ��m��n��
��1�������ǵ����Լ������������������
 Ҫ�����롢������������н��У���Լ���ɺ���ʵ�֡�
��2���ں����������Լ������С������������ʾ��ʹ�����ò�����*/
	int m = 0, n = 0;
	
	cin >> m>> n;
	cout << "�������Ϊ��" << gcd(m, n) << endl;
	cout << "��С������Ϊ��" << lcm(m, n) << endl;
	return 0;

}