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
    // :: Find missing eleents of N natural nubers Starting from 1 :: //
   int arr[6] = {1, 2, 3, 4, 5, 7};
   int len = *(&arr + 1) - arr;
   cout << "The length of the array is: " << len;
    //sum of n natural nubers n(n+1)/2
    // here taking su of n + 1 natural nuber's as we are assuming a nuer is missed from the array
    int expectedVal = ((len + 1)  * (len + 1 + 1))/2;
    int count = 0;
    for(int i = 0; i < len; i++)
    {
        count += arr[i];
    }
    cout << endl;
    cout << "Missing number" << endl;
    cout << expectedVal - count;
    cout << endl;

    // :: Find missing eleents of N natural nubers Starting from any number :: //
    int arr2[10] = {5, 6, 7, 8, 9, 10, 12, 13, 14, 15};
    int len2 = *(&arr2 + 1) - arr2;
    cout << "The length of the array is: " << len2;
    cout << endl;
    int lower = arr2[0];
    int diff = lower - 0;
    for(int i = 1; i < len2; i++)
    {
        if (arr2[i] - i != diff)
        {
            cout << "Missing element : " << i + diff;
            cout << endl;
            diff++;
        }
        
    }

    return 0;
}

