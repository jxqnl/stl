#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char** argv)
{
	//4�ֵ����� iterator(T*),const_iterator(const T*),
	//reverse_iterator(T*),const_reverse_iterator(const T*)
	//istreambuf_iterator��istream_iterator����Ч��,�ӻ�������ȡ�����Ǹ�ʽ������

	//base()���Խ�reverse_iteratorת��iterator ���һ����λ insert��Ӱ�� earseӰ��
	//distance()��advance()���Խ�const_iteratorת��Ϊiterator(����ǿ��ת��,������ʽת��)
	//������ʹ�ò�ͬ���͵ĵ�����

	typedef deque<int> int_deque;
	typedef int_deque::iterator int_iter;
	using const_int_iter = int_deque::const_iterator;
	int_iter i;
	const_int_iter ci;
	if(ci == i)
		cout << "==" << endl;
	else
		cout << "!=" << endl;

	//int_iter re_i(ci);
	//int_iter re_i(const_cast<int_iter>(ci));

	typedef vector<int> int_vec;
	typedef int_vec::iterator int_vec_iter;
	typedef int_vec::const_iterator int_const_vec_iter;

	int_const_vec_iter ci_v;
	//int_vec_iter i_v(const_cast<int_vec_iter>(ci_v));

	typedef string::iterator str_iter;
	typedef string::const_iterator const_str_iter;
	const_str_iter ci_si;
	//str_iter si(const_cast<str_iter>(ci_si));

	int_deque d;
	for(int i = 1; i <= 5; i++)
		d.push_back(i);
	const_int_iter d_const_iter = d.end();
	int_iter d_iter(d.begin());
	advance(d_iter,distance<const_int_iter>(d_iter, d_const_iter));

	std::cout << *--d_iter << std::endl;
	system("pause");
}