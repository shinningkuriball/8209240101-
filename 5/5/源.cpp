#include<iostream>
using namespace std;

int A(int day)
{
	if (day == 10)return 1;
	return(A(day + 1) + 1) * 2;
}
int main() {
	cout << "第一天桃子数量" << A(1) << endl;
	return 0;
}
/*思考：（1）因为苹果数量必须为整数
（2）运用了值传递*/