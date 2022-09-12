// Binary search
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {11,22,33,44,55,66,77,88};
    int low = 0, high = 8, num = 44, mid, i;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]==num){
            break;
        }
        else if(arr[mid]>num){
            high = mid-1;
        }
        else if(arr[mid]<num){
            low = mid+1;
        }
    }
    if(low>high){
        cout << num <<" is not exist" <<endl;
    } else{
        cout << arr[mid] <<" is exist in " << mid << " position" <<endl;
    }
}
