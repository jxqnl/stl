#include <iostream>
#include <algorithm>

using namespace std;

bool myfn(int i, int j)
{
	return i < j;
}

struct myClass
{
	bool operator() (int i, int j)
	{
		return i < j;
	}
}myobj;

//default (1)
//template <class ForwardIterator>
//ForwardIterator max_element(ForwardIterator first, ForwardIterator last);
//custom(2)
//template <class ForwardIterator, class Compare>
//ForwardIterator max_element(ForwardIterator first, ForwardIterator last,
//	Compare comp);

int main(int argc, char**argv)
{
	int myints[] = {3,7,2,5,6,4,9};

	cout << "smallest:" << *min_element(myints, myints + 7)<<endl;
	cout << "largest:" << *max_element(myints, myints + 7) << endl;
	cout << "fn sm:" << *min_element(myints,myints+7,myfn)<<endl;
	cout << "fn la:" << *max_element(myints, myints + 7, myfn)<<endl;
	cout << "myobj sm:" << *min_element(myints, myints + 7, myobj) << endl;
	cout << "myobj la:" << *max_element(myints, myints + 7, myobj) << endl;
	system("pause");
	return 0;
}