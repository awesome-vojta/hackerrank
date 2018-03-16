#include <iostream>
#include <vector>

using namespace std;
// Two guzs are creating challenges
// these are ranked by originality, difficulty and clarity
// print out score of these guys
// If originality1 > originality2, score1 ++

vector <int> solve(int a0, int a1, int a2, int b0, int b1, int b2);

vector <int> solve(int a0, int a1, int a2, int b0, int b1, int b2){
    vector < int > vector1;
    int a_score=0;
    int b_score=0;

    if (a0>b0){a_score++;}
    else if (a0<b0){b_score++;}

    if (a1>b1){a_score++;}
    else if (a1<b1){b_score++;}

    if (a2>b2){a_score++;}
    else if (a2<b2){b_score++;}

    cout << a_score << endl;
    cout << b_score << endl;

    vector1.push_back(a_score);
    vector1.push_back(b_score);

    return vector1;
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;
    return 0;
}