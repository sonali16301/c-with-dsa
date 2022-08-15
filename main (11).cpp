/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void SelectionSort(int arr[],int n)
{
    for(int i =0; i<n-1; i++)
    {
        int midindex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[midindex]){
                midindex = j;
            }
        }
        swap(arr[i],arr[midindex]);
    }
}

void printArray(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5]={2,8,4,9,1};
    SelectionSort(arr,5);
    printArray(arr,5);
    return 0;
}