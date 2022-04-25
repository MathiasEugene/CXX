#ifndef __Context
#define __Context


class TaxStrategy;
class Context{

public:
    // default constructor
    Context(TaxStrategy* _mpStrategy ): mpStrategy(_mpStrategy){}
    ~Context(){delete this->mpStrategy; }
    double CalculateTax(){
        return mpStrategy->Calculate( *this);
    }
private:
    TaxStrategy* mpStrategy;

};
#endif