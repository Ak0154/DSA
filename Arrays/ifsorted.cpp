#include <iostream>
using namespace std;

bool ifsorted(int a[7],int n){
    for(int i=0; i<n-1;i++){
        if(a[i]>a[i+1]){
            return false;}     
    }
    return true;
}
int main(){
    int a[7]={1,2,3,4,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    if (ifsorted(a, n)) {
        cout << "Array is sorted ascending\n";
    } else {
        cout << "Array is NOT sorted\n";
    }

    return 0;

}