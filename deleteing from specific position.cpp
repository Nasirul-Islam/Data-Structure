// Deleting array element from specific position
#include<iostream>
using namespace std;

int main()
{
    int arr_size, i;
    cout << "Enter array size: ";
    cin >> arr_size;
    int arr[arr_size];
    // Input array
    cout << "Enter array elements: \n";
    for(i=0;i<arr_size; i++){
        cout << "arr[" <<i<< "] = ";
        cin >> arr[i];
    }
    // show array
    cout << "Array values are: \n";
    for(i=0;i<arr_size; i++){
        cout << "arr[" <<i<< "] = " << arr[i] <<endl;
    }
    // which position element do you want to delete
    int position;
    int newSize = arr_size - 1;
    cout << "which position element do you want to delete: ";
    cin >> position;
    position = position - 1;
    // deleting element
    for(i=position; i<=newSize; i++){
        arr[i] = arr[i+1];
    }
    arr_size = arr_size -1;
    // show array after insert
    cout << "Array values are: \n";
    for(i=0;i<arr_size; i++){
        cout << "arr[" <<i<< "] = " << arr[i] <<endl;
    }
}
