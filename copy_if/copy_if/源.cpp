#include <iostream>
#include <algorithm>
#include <vector>

using  namespace std;

//template <class InputIterator, class OutputIterator, class UnaryPredicate>
//OutputIterator copy_if(InputIterator first, InputIterator last,
//	OutputIterator result, UnaryPredicate pred);

int main(int argc, char**argv)
{
	vector<int> foo = { 25,5,15,-5,-15 };
	vector<int> bar(foo.size());

	auto it = copy_if(foo.begin(), foo.end(), bar.begin(), [](int i) {
		return !(i < 0);
	});
	bar.resize(distance(bar.begin(), it));
	for(int& x : bar)
		cout << " " << x;
	cout << endl;
	system("pause");
	return 0;
}