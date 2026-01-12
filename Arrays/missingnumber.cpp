#include <iostream>
using namespace std;

class Solution{
    public:
    
    int missingNumber(int a[], int n){
        int sum= (n*(n+1))/2;
        int actual_sum=0;
        for(int i=0;i<n;i++){
            actual_sum+=a[i];
        }
        int numbermissing=sum-actual_sum;
        cout<<"Missing number= "<<numbermissing;
        return numbermissing;
    }
};
int main(){
    int a[]={1,8,4,0,2,6,5,3};
    int n=sizeof(a)/sizeof(a[0]);

Solution s;
s.missingNumber(a,n);
return 0;
}