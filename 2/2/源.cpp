#include<iostream>
#include<vector>
using namespace std;

	/*2.   ��д�������㣺����һ���������ж�һ�������Ƿ�Ϊ������ʹ�����º���ͷ��
bool is_prime(int num) ,���num��������������true�����򷵻�false��
���ú���is_prime�ҳ�ǰ200������������ÿ��10�������*/
  bool is_prime(int num)
    {
        if (num <= 1) return false;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) return false;
        }
        return true;
    }//һ�������ҳ������ĺ���

  int main() {
        vector<int> primes;//���д���������һ����Ϊprimes��vector��������������һ����̬���飬���ڴ洢�������͵�������
        for (int i = 2; primes.size() < 200; i++) {
            if (is_prime(i)) {
                primes.push_back(i);
            }
        }
        for (int i = 0; i < primes.size(); i++) {
            cout << primes[i] << (i % 10 == 9 ? "\n" : "\t");//������0��ʼ������%9���ж��ǲ�����9�������������
        }
        return 0;
    }




 

