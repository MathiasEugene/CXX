#include "templateHeritance.h"


template< typename T>
CTemplateDerived<T>::CTemplateDerived(){

};

template< typename T>
CTemplateDerived<T>::CTemplateDerived(int _a, T _b): b(_b)
{ 
	a=_a; 
}

template< typename T>
inline void CTemplateDerived<T>:: Print()
{ 
	std::cout<<"Base data member a = "<<a<<std::endl;
	std::cout<<"Derived data member b = "<<b<< std::endl;
}


template class CTemplateDerived<double>;