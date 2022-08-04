/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

long long int sqrtInteger(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s+(e-s)/2;
    
    long long int ans = -1;
    while(s<=e)
    {
        long long int square = mid*mid;
        if (square == n)
        {
          return mid;  
        }
        else if(square > n)
        {
            e = mid-1;
        }
        else
        {
            ans = mid;
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

double moreprecision(int n, int precision, int tempsol)
{
    double factor = 1;
    double ans = tempsol;
    for (double i=0;i<precision;i++)
    {
        factor = factor/10;
        for(double j = ans; j*j<n; j =j+factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    
    int tempsol = sqrtInteger(n);
    cout<<"Answer is "<<moreprecision(n,3,tempsol)<<endl;
    return 0;
}
