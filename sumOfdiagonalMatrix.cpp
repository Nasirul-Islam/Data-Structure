// Sum of diagonal matrix
#include<iostream>
using namespace std;

int main()
{
     int a[10][10], r1, c1, i, j, k;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;

    while (r1!=c1)
    {
        cout << "Error! column of first matrix not equal to row of second.";

        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;
    }

    // Storing elements of matrix.
    cout << endl << "Enter elements of matrix :" << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    // Sum of diagonal
    int sum  = 0;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            if(i==j)
            sum = sum + a[i][j];
        }
    // Sum of upper diagonal
    int upperSum  = 0;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            if(i<j)
            upperSum += a[i][j];
        }
    // Sum of lower diagonal
    int lowerSum  = 0;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            if(i>j)
            lowerSum += a[i][j];
        }
    // Show Sum of diagonal, upper, and lower diagonal matrix.
    cout << endl << "Sum of diagonal matrix = " << sum << endl;
    cout << endl << "Sum of upper diagonal matrix = " << upperSum << endl;
    cout << endl << "Sum of lower diagonal matrix = " << lowerSum << endl;
}
