#include<iostream>
#include<algorithm>
#include <vector>
#include<functional>

using namespace std;
int op_increase(int i)
{
	return ++i;
}

int main(int argc, char**argv)
{
	vector<int> foo;
	vector<int> bar;

	for(int i = 1; i < 6; i++)
		foo.push_back(i * 10);
	bar.resize(foo.size());

	transform(foo.begin(), foo.end(), bar.begin(), op_increase);
	transform(foo.begin(),foo.end(),bar.begin(),foo.begin(),plus<int>());
	for(vector<int>::iterator it = foo.begin(); it != foo.end(); it++)
		cout << " " << *it;
	cout << endl;
	system("pause");
	return 0;
}