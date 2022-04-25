#pragma  once
class myClass
{
public:
    myClass();
	myClass(const myClass &mc);
	myClass & operator = (const myClass &mc);
    myClass(const double *_arr, const int &_arrSize);
    ~myClass();
public:
    int arrSize;
    double * arr;
};


