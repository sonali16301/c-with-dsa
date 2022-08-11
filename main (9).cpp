/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

bool isPossible(int boards[],int n, int k,int mid)
{
    int Paintercount = 1;
    int Boardsum = 0;
    for(int i = 0;i<n;i++)
    {
        if(Boardsum+boards[i]<=mid)
        {
            Boardsum += boards[i];
        }
        else
        {
            Paintercount++;
            if(Paintercount > k || boards[i] > mid)
            {
                return false;
            }
            Boardsum = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(int boards[],int n, int k)
{
    int start = 0;
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
        sum += boards[i];
    }
    int end = sum;
    int mid = start+(end-start)/2;
    int ans = -1;
    while(start<=end)
    {
        if((isPossible(boards,n,k,mid)))
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
