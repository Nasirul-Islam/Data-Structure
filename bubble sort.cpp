#include<iostream>
using namespace std;

int main()
{
    int i, j, temp;
    int arr[] = {110,30,50,230,40,60,80,70,90};
    int arrSize = sizeof(arr)/ sizeof(arr[0]);
    // sorting
    for(i=0; i<arrSize; i++)
    {
        for(j=0; j<arrSize-i-1; j++){
            if(arr[j]>arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
    }
    // show array after sorting
    for(i=0; i<arrSize; i++){
        cout << arr[i] <<endl;
    }
}
