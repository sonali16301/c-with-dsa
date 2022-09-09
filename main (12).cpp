/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[5]={1,6,8,-1,2};
    cout<<"Enter the key to be searched"<<endl;
    int key;
    cin>>key;
    bool found = search(arr,5,key);
    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"key is absent"<<endl;
    }
    

    return 0;
}