#include <iostream>
#include <algorithm>
#include <vector>

bool isOdd(int i)
{
	return (i % 2) == 1;
}
using namespace std;

//template <class InputIterator, class UnaryPredicate>
//InputIterator find_if(InputIterator first, InputIterator last, UnaryPredicate pred);

int main(int argc, char**argv)
{
	vector<int> myVector;
	myVector.push_back(10);
	myVector.push_back(25);
	myVector.push_back(44);
	myVector.push_back(55);
	vector<int>::iterator it = find_if(myVector.begin(), myVector.end(), isOdd);
	cout << " " << *it << endl;
	system("pause");
	return  0;
}