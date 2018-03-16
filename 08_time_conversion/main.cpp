#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    string minSec = s.substr(2,6);
    int hrs = atoi( s.substr(0,2).c_str() ); // atoi( string.c_str() ) string -> int12
    string m =  s.substr(8,9); // *8th and 9th char

    if(hrs==12){
        if(m=="AM"){
            return "00"+minSec; // 12:xx:xxAM eg. morning
        }else {
            return "12" + minSec; // 12:xx:xxPM eg. noon
        }
    }else if(m=="AM"){ // 09:xx:xxAM eg. morning
        return ( (hrs>=10) ? to_string(hrs) : "0" + to_string(hrs) )+minSec;
    }else if(m=="PM"){ // 09:xx:xxPM eg. evening
        return to_string(hrs+12)+minSec;
    }
}

int main() {
    string s;
    cin >> s;
    cout << timeConversion(s);
//    string s = "07:05:45PM";
//    int hrs = atoi(s.substr(0,2).c_str());
//    cout << hrs << endl;
//    cout << hrs+10 << endl;

    return 0;
}