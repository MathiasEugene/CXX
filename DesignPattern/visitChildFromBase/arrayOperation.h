class arrBase{

protected:
    int * arr1;
    int arr1Size;
public:
    arrDeepCopy( const int *_arrIn, const int _arrSize){

        int *ptr = this->getChildData();
        for(int i=0; i< _arrSize; ++i )
        {
            *ptr = _arrIn[i];
            ++ptr;

        }
    };
    virtual int getChildData()=0;
};

class arrChild{

protected:
    int * arr2;
    int arr2Size;

    int getChildData(){
        
    }


};
