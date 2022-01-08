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

class B;
class A
{
public:
	//shared_ptr<B> pb;
	weak_ptr<B> pb;
	~A()
	{
		cout << "A Delete\n" << endl;
	}
};

class B
{
public:
	shared_ptr<A> pa;
	~B()
	{
		cout << "B Delete\n" << endl;
	}
};

void fun()
{
	shared_ptr<B> _pb(new B);
	shared_ptr<A> _pa(new A);
	_pb->pa = _pa;
	_pa->pb = _pb;
	cout << "pb use_count:" << _pb.use_count() << endl;
	cout << "pa use_count:" << _pa.use_count() << endl;
}

unique_ptr<int> Clone(int p)
{
	return unique_ptr<int>(new int(p));
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
	fun();

	unique_ptr<string> p1(new string("stego"));
	//unique_ptr<string> p2(p1);
	//unique_ptr<string> p3;
	//p3 = p1;
	unique_ptr<string> p2(p1.release());
	cout << "p2:" << *p2 << endl;
	//cout << "p1:" << *p1 << endl;

	unique_ptr<string> p3(new string("Trix"));
	p2.reset(p3.release());
	cout << "now p2:" << *p2.get() << endl;

	unique_ptr<int> pi;
		pi = Clone(5);
	cout << "pi:" << *pi << endl;

	unique_ptr<string> pu;
	pu = unique_ptr<string>(new string("you"));
	system("pause");
	return 0;
}