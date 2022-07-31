/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    while(start <= end) {
        if (arr[mid] == key){
            return mid;
        }
        if (key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }   //key < arr[mid]
        mid = start + (end-start)/2;   
    }
    return -1;
}
int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};
    
    int evenIndex = binarysearch(even, 6, 12);
    cout << "Index of 12 is " <<evenIndex << endl;
    int oddIndex = binarysearch(odd, 5, 20);
    cout << "Index of 8 is " <<oddIndex << endl;
    
    return 0;
    
}