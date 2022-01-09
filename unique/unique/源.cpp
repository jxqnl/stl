#include <iostream>
#include <vector>
#include <algorithm>


//equality(1)
//template <class ForwardIterator>
//ForwardIterator unique(ForwardIterator first, ForwardIterator last);
//predicate(2)
//template <class ForwardIterator, class BinaryPredicate>
//ForwardIterator unique(ForwardIterator first, ForwardIterator last,
//	BinaryPredicate pred);

using namespace std;

bool myfunction(int i, int j)
{
	return i == j;
}

int main(int argc, char**argv)
{
	int myints[] = {10,20,20,20,30,30,20,20,10};
	vector<int> myvector(myints, myints + 9);
	vector<int>::iterator it = unique(myvector.begin(), myvector.end());

	myvector.resize(distance(myvector.begin(), it));
	for(vector<int>::iterator it = myvector.begin(); it != myvector.end(); it++)
		cout << " " << *it;
	cout << endl;
	unique(myvector.begin(), myvector.end(), myfunction);
	for(vector<int>::iterator it = myvector.begin(); it != myvector.end(); it++)
		cout << " :" << *it;
	system("pause");
	return 0;
}