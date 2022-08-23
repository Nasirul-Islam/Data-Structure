#include<iostream>
using namespace std;

int main()
{
    int num, i, arr[50], sumEven = 0, sumOdd = 0;
    cout << "Enter array length: ";
    cin >> num;
    cout << "Enter array element: ";
    // input array
    for(i=0; i<num; i++)
    {
        cin >> arr[i];
    }
    // sum of even and odd element
    for(i=0; i<num; i++)
    {
        //cout << arr[i] << endl;
        if(i%2==0)
        {
            cout << "even " << arr[i] << endl;
            sumEven += arr[i];
        }
        else
        {
            cout << "odd " << arr[i] << endl;
            sumOdd += arr[i];
        }
    }
    cout <<"Sum of Even element = "<< sumEven << endl;
    cout <<"Sum of Odd element = "<< sumOdd << endl;
}
