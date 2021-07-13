#include <iostream>
using namespace std;

class Array{
    private:
        int *A;
        int size;
        int length;
    public:
        Array(){
            size = 10;
            A = new int[10];
            length = 0;
        }
        Array(int sz){
            size = sz;
            A = new int[size];
            length = 0;
        }
    ~Array(){
        delete []A;
    }
    void Display();
    void Insert(int index, int );
    int Delete(int i);
};

int main()
{
    cout << "output\n";
    Array arr(10);
    arr.Insert(0, 1);
    arr.Display();
    return 0;
}



void Array::Display(){
    for (int i = 0; i < length; i++)
    {
        cout<<A[i]<<" ";  
    }
}

void Array::Insert(int index, int x){
    if(index >= 0 && index <= length){
        for (int i = length - 1; i >= index ; i--)
        {
            A[i+1] = A[i];

        }
        A[index] = x;
        length++;
    }
}

int Array::Delete(int index){
    int temp = 0;

    if(index > 0 && index < length){
        for(int i = index; i < length - 1; i++){
            A[i] = A[i+1];
        }
        length--;
    }
    return temp;
}
