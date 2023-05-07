#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <fstream>
#include <istream>

#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv)
{
	//4种迭代器 iterator(T*),const_iterator(const T*),
	//reverse_iterator(T*),const_reverse_iterator(const T*)
	//istreambuf_iterator比istream_iterator更有效率,从缓冲区读取而不是格式化输入

	//base()可以将reverse_iterator转成iterator 相差一个单位 insert不影响 earse影响
	//distance()和advance()可以将const_iterator转换为iterator(不能强制转换,不能隐式转换)
	//避免混合使用不同类型的迭代器

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

	vector<int> v;
	v.reserve(5);
	for(int i = 1; i <= 5; ++i)
		v.emplace_back(i);
	vector<int>::reverse_iterator ri = find(v.rbegin(), v.rend(), 3);
	std::cout << "ri:"<<*ri << std::endl;
	vector<int>::iterator fi(ri.base());
	std::cout << "i:" << *fi << std::endl;

	v.insert(fi, 99);
	std::for_each(v.begin(), v.end(), [=](int c) {
		std::cout << " " << c;
	});
	cout<<std::endl;

	vector<int>::reverse_iterator ri2 = find(v.rbegin(), v.rend(), 3);
	//v.erase(--ri2.base());
	v.erase((++ri2).base());
	std::for_each(v.begin(), v.end(), [=](int c) {
		std::cout << " " << c;
	});
	cout << std::endl;

	ifstream input_file("C:\\Git\\stl\\effective stl\\all_iterator\\x64\\Debug\\test.txt");
	std::string file_data(istreambuf_iterator<char>(input_file), istreambuf_iterator<char>());

	std::istreambuf_iterator<char> eos;                    // end-of-range iterator
	std::istreambuf_iterator<char> iit(std::cin.rdbuf()); // stdin iterator
	std::string mystring;

	std::cout << "Please, enter your name: ";

	while(iit != eos && *iit != '\n') mystring += *iit++;

	std::cout << "Your name is " << mystring << ".\n";
	system("pause");
}