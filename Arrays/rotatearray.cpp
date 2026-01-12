#include <iostream>
#include <algorithm>
using namespace std;

void reverse_section(int a[], int start, int end) {
    while (start < end) {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int k;
    
    cout << "Enter K: ";
    cin >> k;
    k = k % n; 
    reverse_section(a, 0, n - 1);
    reverse_section(a,0,k-1);
    reverse_section(a,k,n-1);

    cout << "Rotated Array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}