#include<algorithm>
#include"myClass.h"
myClass::myClass(const myClass &mc)
{ 
	arrSize = mc.arrSize;
	arr = new double[arrSize]();
	std::copy_n(mc.arr, arrSize, arr);
}
myClass& myClass::operator=(const myClass &mc)
{
    if(this == &mc)
        return *this;
	delete[] arr;
    arr = new double[arrSize]();
	std::copy_n(mc.arr, arrSize, arr);

	return *this;
}
myClass::myClass(const double *_arr, const int &_arrSize): arrSize(_arrSize)
{
	arr = new double[arrSize]();
	std::copy_n(_arr, arrSize, arr);
}

myClass::myClass()
{ 
	int arrSize = 5;
	arr = new double[arrSize]();
}

myClass::~myClass()
{
	delete[] arr; 
	arr = NULL;
}
