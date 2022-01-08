#include <iostream>
#include<functional>
#include<numeric>

//sum(1)
//template <class InputIterator, class T>
//T accumulate(InputIterator first, InputIterator last, T init);
//custom(2)
//template <class InputIterator, class T, class BinaryOperation>
//T accumulate(InputIterator first, InputIterator last, T init,
//	BinaryOperation binary_op);


int myFunction(int x, int y)
{
	return x + 2 * y;
}

struct myClass
{
	int operator()(int x, int y)
	{
		return x + y * 3;
	}
}myObject;

using namespace std;
int main(int argc, char**argv)
{
	int init = 100;
	int numbers[] = { 10,20,30 };

	cout << accumulate(numbers, numbers + 3, init)<<endl;

	cout << accumulate(numbers, numbers + 3,init, myFunction)<<endl;

	cout << accumulate(numbers, numbers + 3, init, myObject) << endl;

	cout << accumulate(numbers, numbers + 3, init, minus<int>());
	system("pause");
	return 0;
}