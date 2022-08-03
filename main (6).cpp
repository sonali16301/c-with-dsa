/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
class Solution {
public:
    long long int binarysearch(int num){
        int start = 0;
        int end = num;
        long long int mid = start+(end-start)/2;
        long long int ans = -1;
        while(start<=end){
            long long int square = mid*mid;
            if(square==num)
                return mid;
            if(square<num){
                ans = mid;
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid = start+(end-start)/2;
        }
        return ans;
    }
    
    int mySqrt(int x) {
        return binarysearch(x);
        
    }
};