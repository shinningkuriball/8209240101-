#include<iostream>
using namespace std;

int A(int day)
{
	if (day == 10)return 1;
	return(A(day + 1) + 1) * 2;
}
int main() {
	cout << "��һ����������" << A(1) << endl;
	return 0;
}
/*˼������1����Ϊƻ����������Ϊ����
��2��������ֵ����*/