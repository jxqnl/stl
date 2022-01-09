#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int randomNum()
{
	return rand() % 100;
}

struct c_unique
{
	int current;
	c_unique()
	{
		current = 0;
	}
	int operator()()
	{
		return ++current;
	}
}uniqueNum;

//template <class ForwardIterator, class Generator>
//void generate(ForwardIterator first, ForwardIterator last, Generator gen);

int main(int argc, char**argv)
{
	srand(unsigned(time(0)));
	vector<int> myvector(8);

	generate(myvector.begin(),myvector.end(),randomNum);
	for(vector<int>::iterator it = myvector.begin(); it != myvector.end(); it++)
		cout << " " << *it;
	cout << endl;

	generate(myvector.begin(), myvector.end(),uniqueNum);
	for(vector<int>::iterator it = myvector.begin(); it != myvector.end(); it++)
		cout << " " << *it;
	cout << endl;
	system("pause");
	return 0;
}