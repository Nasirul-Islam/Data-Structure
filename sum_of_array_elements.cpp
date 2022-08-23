#include<iostream>
using namespace std;

int main()
{
    int arr[40], num, i, sum = 0;
    cout << "Enter array length: ";
    cin >> num;
    cout << "Enter array element: ";
    // input array
    for(i=0; i<num; i++)
    {
        cin >> arr[i];
    }
    // sum array elements

    for(i=0; i<num; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of array elements = " << sum <<endl;
    return 0;
}

