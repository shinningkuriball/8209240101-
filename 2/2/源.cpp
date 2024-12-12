#include<iostream>
#include<vector>
using namespace std;

	/*2.   编写程序满足：声明一个函数，判断一个整数是否为素数，使用如下函数头：
bool is_prime(int num) ,如果num是素数函数返回true，否则返回false；
利用函数is_prime找出前200个素数，并按每行10个输出：*/
  bool is_prime(int num)
    {
        if (num <= 1) return false;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) return false;
        }
        return true;
    }//一个用于找出素数的函数

  int main() {
        vector<int> primes;//这行代码声明了一个名为primes的vector（向量），它是一个动态数组，用于存储整数类型的素数。
        for (int i = 2; primes.size() < 200; i++) {
            if (is_prime(i)) {
                primes.push_back(i);
            }
        }
        for (int i = 0; i < primes.size(); i++) {
            cout << primes[i] << (i % 10 == 9 ? "\n" : "\t");//索引从0开始所以是%9，判断是不是余9，是则输出换行
        }
        return 0;
    }




 

