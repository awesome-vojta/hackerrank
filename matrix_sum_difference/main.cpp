#include <iostream>
#include <vector>

using namespace std;

int diagonalDifference(vector < vector<int> > a);

int main() {
    int n;
    int p;
    cin >> n;
    vector < vector<int> > matrix(n,vector<int>(n));
    // n elements, inside it vectors of n elements
    for(int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    for(ssize_t i = 0;i < matrix.size();i++){
        for(ssize_t j = 0;j < matrix[i].size();j++){
            cout << matrix[i][j] << (j==matrix[i].size()-1 ? "\n" : "");
        }
    }

    cout << diagonalDifference(matrix);
    return 0;
}

int diagonalDifference(vector < vector<int> > a){
    int sum0=0;
    int sum1 = 0;
    ssize_t n = a.size();
    for(ssize_t i = 0; i < n; i++) {
        sum0 += a[i][i];
    }
    int j = n;
    for(ssize_t i = 0; i < n; i++) {
        j--;
        sum1 += a[i][j];
    }
    return abs(sum0-sum1);
}