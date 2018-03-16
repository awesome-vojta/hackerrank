#include <iostream>
#include <vector>

using namespace std;

// How to write it:
// 1) think about input
//     a) How could you break it?
//     b) How many cases can there be?
// 2) logic
//     a) How do I actually solve it with pen and paper?

int birthdayCakeCandles(vector <int> candles, int len){
    int max = 0; int sum = 0;
    // loop through candles
    // 1) taller      -> max = newMax, sum = 1;
    // 2) same height -> sum ++;
    // 3) shorter     -> none;

    for (int i = 0; i < len; ++i) {
        if (max < candles[i]) {                  // 1)
            max = candles.at(i);
            sum = 1;
        } else if (max == candles.at(i)) {       // 2)
            sum++;
        }
    }
    return sum;
}


int main() {
//    cout << "how old is your niece?";
    int age; cin >> age;
    vector <int> candles;

    int height;
    for (int i = 0; i < age; ++i) {
        cin >> height;
        candles.push_back(height);
    }
    cout << birthdayCakeCandles(candles,age);

    return 0;
}