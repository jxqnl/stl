#include <iostream>
#include <iterator>
#include<algorithm>
#include <vector>

using namespace std;
//template <class Container>
//back_insert_iterator<Container> back_inserter(Container& x);
int main(int argc, char**argv)
{
	vector<int> foo, bar;
	for(int i = 1; i <= 5; i++)
	{
		foo.push_back(i);
		bar.push_back(i * 10);
	}
	copy(bar.begin(),bar.end(),back_inserter(foo));
	for(vector<int>::iterator it = foo.begin(); it != foo.end(); it++)
		cout << " " << *it;
	cout << endl;
	system("pause");
	return 0;
}