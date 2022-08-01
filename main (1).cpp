/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

// First And Last Occurence of an element //


#include <iostream>

using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int start = 0, end = size-1;
    int mid = start+(end-start)/2;
    int ans = -1;
    
    while(start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid]<key)  // go to right part
        {
            start = mid+1;
        }
        else if(arr[mid]>key)  // go to left part
        {
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key)
{
    int start = 0, end = size-1;
    int mid = start+(end-start)/2;
    int ans = -1;
    
    while(start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid]<key)  // go to right part
        {
            start = mid+1;
        }
        else if(arr[mid]>key)  // go to left part
        {
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}

int main()
{
    int even[11] = {1,2,3,3,3,3,3,3,3,3,5};
    cout<<"First Occurence of 3 is at index "<< firstOcc(even, 11, 3) <<endl;
    cout<<"Last Occurence of 3 is at index "<< lastOcc(even, 11, 3) <<endl;
    
    

    return 0;
}