#include <iostream>
#include <deque>
using namespace std;
int main(int argc, char** argv) 
{
	//4ÖÖ
	typedef deque<int> int_deque;
	typedef int_deque::iterator int_iter;
	using const_int_iter = int_deque::const_iterator;
	int_iter i;
	const_int_iter ci;
	if(ci == i)
		cout << "==" << endl;
	else
		cout << "!=" << endl;
	system("pause");
}