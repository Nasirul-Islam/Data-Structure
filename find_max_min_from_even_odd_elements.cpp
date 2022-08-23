#include<iostream>
using namespace std;

int main()
{
    int num, i, arr[50];
    int maxEven = arr[0], maxOdd = arr[0];
    cout << "Enter array length: ";
    cin >> num;
    cout << "Enter array element: ";
    // input array
    for(i=0; i<num; i++)
    {
        cin >> arr[i];
    }
    int minEven = arr[0], minOdd = arr[1];
    // sum of even and odd element
    for(i=0; i<num; i++)
    {
        //cout << arr[i] << endl;
        if(i%2==0)
        {
            cout << "even " << arr[i] << endl;
            if(arr[i]>maxEven)
            {
                maxEven = arr[i];
            }
            if(arr[i]<minEven)
            {
                minEven = arr[i];
            }
        }
        else
        {
            cout << "odd " << arr[i] << endl;
            if(arr[i]>maxOdd)
            {
                maxOdd = arr[i];
            }
            if(arr[i]<minOdd)
            {
                minOdd = arr[i];
            }
        }
    }
    cout <<"Biggest of Even element = "<< maxEven << endl;
    cout <<"Biggest of Odd element = "<< maxOdd << endl;
    cout <<"Smallest of Even element = "<< minEven << endl;
    cout <<"Smallest of Odd element = "<< minOdd << endl;
}
