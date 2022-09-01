#include<iostream>
using namespace std;

int main()
{
    int arr_size,i;
    cout << "Enter size of array: " <<endl;
    cin >> arr_size;
    int arr[arr_size];
    // Input array value
    int elements = 5;
    cout << "Enter elements of array: " <<endl;
    for(i=0;i<elements;i++){
        cout << "arr[" <<i<< "] = ";
        cin >> arr[i];
    }
    // Show array value
    cout << "Array values are: " <<endl;
    for(i=0;i<elements;i++){
        cout << "arr[" <<i<< "] = " << arr[i] <<endl;
    }
    // Insertion -----------------------
    int flag = 0;
    while(flag==0){
        if(elements == arr_size){
            cout << "Overflow, Can't insert values: ";
            flag = 1;
        } else{
            cout << "Enter a values to insert at index 0 position: ";
            int newItem;
            cin >> newItem;
            for(i = elements; i>0;i--){
                arr[i]=arr[i-1];
                cout << "arr[" <<i<< "] = " << arr[i] <<endl;
            }
            arr[0] = newItem;
            elements++;
            cout << "arr[" <<i<< "] = " << arr[0] <<endl;
        }
    }
    // Show array values
    cout << "Array values after insert: " <<endl;
    for(i=0;i<arr_size;i++){
        cout << "arr[" <<i<< "] = " << arr[i] <<endl;
    }
}
