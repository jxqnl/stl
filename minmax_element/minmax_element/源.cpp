#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

//default (1)
//template <class ForwardIterator>
//pair<ForwardIterator, ForwardIterator>
//minmax_element(ForwardIterator first, ForwardIterator last);
//custom(2)
//template <class ForwardIterator, class Compare>
//pair<ForwardIterator, ForwardIterator>
//minmax_element(ForwardIterator first, ForwardIterator last, Compare comp);

int main(int argc, char**argv)
{
	std::array<int, 7> foo{3,7,2,9,5,8,6};
	auto result = minmax_element(foo.begin(), foo.end());
	cout << "min:" << *result.first << " " << result.first - foo.begin()<<endl;
	cout << "max:" << *result.second << " " << result.second - foo.begin() << endl;
	system("pause");
	return 0;
}