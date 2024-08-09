#include <iostream>

using namespace std;
template <typename T>
class MinMax {
    T *arr;
    int size;
    public:
    MinMax(T *data,int s){
        this->size = s;
        this->arr = data;
    }

    T getMin(){
        T minVal = this->arr[0];
        for(int i=0;i<this->size;i++)
            if(this->arr[i]< minVal)
                minVal= this->arr[i];
        
        return minVal;
    }
    T getMax(){
        T maxVal = this->arr[0];
        for(int i = 0;i<this->size;i++)
            if(this->arr[i] > maxVal)
                maxVal = this->arr[i];

        return maxVal;
    }
};


int main(){
    int arr[] = {1,23,4,4,6,3};

    MinMax<int> myArr(arr,6);
    cout << myArr.getMax();
    cout << myArr.getMin();
    
return 0;
}