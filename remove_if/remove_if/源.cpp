#include <iostream>
#include <algorithm>

using namespace std;

//template <class ForwardIterator, class UnaryPredicate>
//ForwardIterator remove_if(ForwardIterator first, ForwardIterator last,
//	UnaryPredicate pred);
bool isOdd(int i)
{
	return i % 2 == 1;
}

int main(int argc, char**argv)
{
	int myints[] = {1,2,3,4,5,6,7,8,9};
	int* pbegin = myints;
	int* pend = myints + sizeof(myints) / sizeof(int);

	pend = remove_if(pbegin, pend, isOdd);
	for(int * p = pbegin; p != pend; p++)
		cout << " " << *p;
	cout << endl;
	system("pause");
	return 0;
}