#include <bits/stdc++.h>
using namespace std;

void plusMinus(vector <int> arr) {
    double neg=0;double pos=0;double zero=0;
    double s = 0;

    for(ssize_t i = 0; i < arr.size(); i++){
        if(arr[i]>0){pos+=1;}
        else if(arr[i]<0){neg+=1;}
        else{zero+=1;}
        s++;
    }

    cout << pos/s << endl;
    cout << neg/s << endl;
    cout << zero/s << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
        cin >> arr[arr_i];
    }
    plusMinus(arr);
    return 0;
}