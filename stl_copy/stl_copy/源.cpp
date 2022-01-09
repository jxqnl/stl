#include <iostream>
#include <algorithm>
#include<vector>

using namespace std;
//template <class InputIterator, class OutputIterator>
//OutputIterator copy(InputIterator first, InputIterator last, OutputIterator result);
int main(int argc, char**argv)
{
	int myints[] = { 10,20,30,40,50,60,70 };
	vector<int> myvector(7);
	copy(myints, myints + 7, myvector.begin());
	for(vector<int>::iterator it = myvector.begin(); it != myvector.end(); it++)
		cout << " " << *it;
	cout << endl;
	system("pause");
	return 0;
}