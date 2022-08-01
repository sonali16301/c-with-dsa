/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int PeakIndexInMountainArray(int arr[], int size)
{
    int start = 0, end = size-1;
    int mid = start+(end-start)/2;
    
    while(start<end)
    {
        if(arr[mid]<arr[mid+1])
        {
            start = mid+1;
        }
        else
        {
            end = mid;
        }
        mid = start+(end-start)/2;
    }
    return start;
}

int main()
{
    int arr[4] = {3,4,5,1};
    cout<<"peak index in mountain array is "<<PeakIndexInMountainArray(arr, 4);
    return 0;
}