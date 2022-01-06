#include <iostream>
#include <memory>
#include <string>
using namespace std;

//shared_ptr<int> Clone(int p)
//{
//	return new int(p);
//}

void process(shared_ptr<int> ptr)
{
	cout << *ptr << endl;
}

int main(int argc, char** argv)
{
	double* p_reg = new double;
	shared_ptr<double> pd;
	//pd = p_reg;
	pd = shared_ptr<double>(p_reg);
	//shared_ptr<double> p_shared = p_reg;
	shared_ptr<double> p_shared = shared_ptr<double>(p_reg);
	shared_ptr<int> p2(new int(1024));
	//shared_ptr<int> p1 = new int(1024);

	int* x(new int(1024));
	//process(x);
	process(shared_ptr<int>(x));
	int j = *x;
	system("pause");
	return 0;
}