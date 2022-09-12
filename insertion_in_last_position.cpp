/*
// insert array last element
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
    // insert last element
    cout << "Insert array last elements: \n";
    for(i=0; i<3;i++){
        int new_element;
        cout << "arr[" <<arr_size<< "] = ";
        cin >> new_element;
        arr[arr_size] = new_element;
        arr_size++;
        if(arr_size == arr_size+3)
            break;
    }
    // show array after insert
    cout << "Array values are: \n";
    for(i=0;i<arr_size; i++){
        cout << "arr[" <<i<< "] = " << arr[i] <<endl;
    }
}
*/
