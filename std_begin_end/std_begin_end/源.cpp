#include <iostream>
#include <vector>

using namespace std;

//template <class Container>
//auto begin(Container& cont) -> decltype (cont.begin());
//template <class Container>
//auto begin(const Container& cont) -> decltype (cont.begin());
//array(2)
//template <class T, size_t N>
//T* begin(T(&arr)[N]);

int main(int argc, char**argv)
{
	vector<int> bar;
	int foo[] = {10,20,30,40,50};
	for(auto it = begin(foo); it != end(foo); it++)
		bar.push_back(*it);
	for(auto it = begin(bar); it != end(bar); it++)
		cout << " " << *it;
	cout << endl;

	system("pause");
	return 0;
}