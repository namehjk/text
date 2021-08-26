#include<iostream>
#include<string>
using namespace std;

template <class T_1,class T_2>
class person
{
public:
	person(T_1 a, T_2 name)
	{
		money = a;
		this->name = name;
	}
	T_1 money;
	T_2 name;
};
int  main()
{
	person<int,string> p(100,"孙悟空");
	cout << p.money << "and" << p.name<<endl;
	person<char, float> p2('h', 3.14);
	cout << p2.money << "  and " << p2.name;
	return 0;
}






