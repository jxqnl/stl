#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool myFunction(int i, int j)
{
	return i == j;
}

//equality(1)
//template <class ForwardIterator>
//ForwardIterator adjacent_find(ForwardIterator first, ForwardIterator last);
//predicate(2)
//template <class ForwardIterator, class BinaryPredicate>
//ForwardIterator adjacent_find(ForwardIterator first, ForwardIterator last,
//	BinaryPredicate pred);


int main(int argc, char**argv)
{
	int myints[] = { 5,20,5,30,30,20,10,10,20 };
	vector<int> myvector(myints, myints + 8);
	vector<int>::iterator it;
	it = adjacent_find(myvector.begin(), myvector.end());
	if(it != myvector.end())
		cout << "adjacent:" << *it << endl;
	it = adjacent_find(++it, myvector.end(), myFunction);
	if(it != myvector.end())
		cout << "adjacent 2£º" << *it << endl;
	system("pause");
	return 0;
}