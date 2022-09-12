// insert in array specific position
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
    // which position do you want to insert
    int position, item;
    cout << "which position do you want to insert: ";
    cin >> position;
    cout << "Enter inserted value: ";
    cin >> item;
    position = position-1;
    int num = arr_size;
    // insert in array specific position
    while(position<=num){
        arr[num+1] = arr[num];
        num = num -1;
    }
    arr[position] = item;
    arr_size++;
    // show array after insert
    cout << "Array values are: \n";
    for(i=0;i<arr_size; i++){
        cout << "arr[" <<i<< "] = " << arr[i] <<endl;
    }
}
