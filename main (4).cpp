/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int findPivot(int arr[], int size)
{
    int start = 0, end = size-1;
    int mid = start+(end-start)/2;
    
    while(start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid+1;
        }
        else
        {
            end = mid;
        }
        mid = start +(end-start)/2;
    }
    return start;
}

int main()
{
    int arr[5] = {5,8,10,17,1};
    cout<<"Pivot of array is "<<findPivot(arr, 5);

    return 0;
}