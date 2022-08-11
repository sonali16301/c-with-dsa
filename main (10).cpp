/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

bool isPossible(vector<int> &stalls, int k,int mid)
{
    int cowcount = 1;
    int lastposition = stalls[0];
    for(int i =0;i<stalls.size();i++)
    {
        if(stalls[i]-lastposition>=mid)
        {
            cowcount++;
            if(cowcount==k)
            {
                return true;
            }
            lastposition = stalls[i];
        }
    }
    return false;
}


int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int s = 0;
    int maxi = -1;
    for(int i =0;i<stalls.size();i++)
    {
        maxi = max(maxi,stalls[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s+(e-s)/2;
    while(s<=e)
    {
        if((isPossible(stalls,k,mid)))
        {
            ans = mid;
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}