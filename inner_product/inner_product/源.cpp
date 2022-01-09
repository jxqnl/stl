#include <iostream>
#include <numeric>
#include <functional>

using namespace std;


//sum / multiply(1)
//template <class InputIterator1, class InputIterator2, class T>
//T inner_product(InputIterator1 first1, InputIterator1 last1,
//	InputIterator2 first2, T init);
//custom(2)
//template <class InputIterator1, class InputIterator2, class T,
//class BinaryOperation1, class BinaryOperation2>
//	T inner_product(InputIterator1 first1, InputIterator1 last1,
//		InputIterator2 first2, T init,
//		BinaryOperation1 binary_op1,
//		BinaryOperation2 binary_op2);

int acc(int x, int y) { return x - y; }
int pro(int x, int y) { return x + y; }

int main(int argc, char**argv)
{
	int init = 100;
	int series1[] = { 10,20,30 };
	int series2[] = { 1,2,3 };
	cout << inner_product(series1, series1 + 3, series2, init)<<endl;
	cout << inner_product(series1, series1 + 3, series2, init, minus<int>(),divides<int>())<<endl;
	cout << inner_product(series1, series1 + 3, series2, init, acc, pro) << endl;
	system("pause");
	return 0;
}