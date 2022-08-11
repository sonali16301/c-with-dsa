/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


bool isPossibleSolution(vector<int> arr, int n, int m,int mid)
{
    int studentcount = 1;
    int pagesum = 0;
    for(int i = 0; i<n ; i++)
    {
        if(pagesum+arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            studentcount++;
            if(studentcount > m || arr[i]>mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}
int allocateBooks(vector<int> arr, int n, int m) {
    int start = 0;
    int sum = 0;
    for(int i =0;i<n;i++){
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start+(end-start)/2;
    while(start<=end)
    {
        if((isPossibleSolution(arr,n,m,mid)))
        {
            ans = mid;
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
