#include <iostream>
using namespace std;

// max and min sum in 5 member sequence of 4 members

void min_max_sum(unsigned long int *arr, int n){
    // find : 1) sum
    //        2) min
    //        3) max
    // subtract min from sum
    // subtract max from min
    unsigned long int min = 99999;
    unsigned long int max = 0;
    unsigned long int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
        min = (min>arr[i]) ? arr[i] : min;
        max = (max<arr[i]) ? arr[i] : max;
    }
    cout << sum-max << " " << sum-min;
}

int main() {
    int n = 5;
    unsigned long int arr[n];

    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    min_max_sum(arr,n);
    return 0;
}
