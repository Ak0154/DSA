#include <iostream>
using namespace std;

int main(){
    int a[5]={4,1,0,7,2};
    int n= sizeof(a)/sizeof(a[0]);
    int even=0;
    int odd=0;

    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

    cout<<"No of even numbers= "<<even;
    cout<<"\nNo of odd numbers= "<<odd;
    
    return 0;
}