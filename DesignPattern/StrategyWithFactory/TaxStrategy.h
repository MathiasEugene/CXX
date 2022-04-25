#ifndef __TaxStrategy
#define __TaxStrategy
class Context;
class TaxStrategy{
public:
	// 定义纯虚函数
	virtual double Calculate(const Context & context) = 0;
	// virtual show(const Context & context) =0;
	// 任何一个基类的析构函数应该声明为虚函数，否则多态的delete会出现问题。
	virtual ~TaxStrategy(){}
//private:
	double mSalary;
};

#endif
