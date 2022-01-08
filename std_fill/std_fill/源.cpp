#include <iostream>
#include<algorithm>
#include <vector>

using namespace std;
//template <class ForwardIterator, class T> 
//void fill(ForwardIterator first, ForwardIterator last, const T& val);

int main(int argc, char**argv)
{
	vector<int> myVector(8);
	fill(myVector.begin(), myVector.begin() + 4, 5);
	fill(myVector.begin() + 3, myVector.end() - 2, 8);
	cout << "myVector contains:";
	for(vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++)
	{
		cout << " " << *it;
	}
	cout << endl;
	system("pause");
	return 0;
}