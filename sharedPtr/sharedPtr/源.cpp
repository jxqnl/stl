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

void pdf()
{
	std::tr1::shared_ptr<int> p1(new int(1));
	std::tr1::shared_ptr<int> p2(p1);
	cout << "p1:" << p1.get() << endl;
	cout << "p2:" << p2.get() << endl;
}

int main(int argc, char** argv)
{
	////double* p_reg = new double;
	////shared_ptr<double> pd;
	//pd = p_reg;
	////pd = shared_ptr<double>(p_reg);
	//shared_ptr<double> p_shared = p_reg;
	////shared_ptr<double> p_shared = shared_ptr<double>(p_reg);
	////shared_ptr<int> p2(new int(1024));
	//shared_ptr<int> p1 = new int(1024);

	//int* x(new int(1024));
	//process(x);
	//process(shared_ptr<int>(x));
	//int j = *x;

	auto_ptr<int> pInv1(new int(11));
	auto_ptr<int> pInv2(pInv1);
	cout << "pinv2:" << *pInv2.get() << endl;
	//cout << "pInv1:" << *pInv1.get() << endl;
	pdf();
	system("pause");
	return 0;
}