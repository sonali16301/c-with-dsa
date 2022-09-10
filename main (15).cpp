/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int findUnique(int arr[],int n){
    int ans = 0;
    for(int i =0;i<n;i++){
        ans=arr[i]^ans;
    }
    return ans;
}

int main()
{
    int arr[8]={1,2,1,3,6,3,4,4};
    int ans = findUnique(arr,8);
    cout<<"The unique element is "<<ans; 

    return 0;
}