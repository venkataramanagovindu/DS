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

int findissingNuberInSortedArray(int arr[]){
    // int len = sizeof(arr)/sizeof(arr[0]);
    int len = *(&arr + 1) - arr;
    cout << len;
    return 0;
}



int main()
{
    cout << "output\n";
   int arr[6] = {1, 2, 3, 4, 5, 7};
   int len = *(&arr + 1) - arr;
   cout << "The length of the array is: " << len;
    //sum of n natural nubers n(n+1)/2
    int expectedVal = ((len + 1)  * (len + 1 + 1))/2;
    int count = 0;
    for(int i = 0; i < len; i++)
    {
        count += arr[i];
    }
    cout << endl;
    cout << "issing number" << endl;
    cout << expectedVal - count;

    

    return 0;
}

