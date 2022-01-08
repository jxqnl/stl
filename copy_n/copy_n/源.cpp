#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//template <class InputIterator, class Size, class OutputIterator>
//OutputIterator copy_n(InputIterator first, Size n, OutputIterator result);

int main(int argc, char**argv)
{
	int myints[] = {10,20,30,40,50,60,70};
	vector<int> myVector;
	myVector.resize(7);

	copy_n(myints, 7, myVector.begin());
	for(vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++)
		cout << " " << *it;
	system("pause");
	return 0;
}