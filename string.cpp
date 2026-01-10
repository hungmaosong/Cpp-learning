#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1("happy ");
    string s2("birthday");
    string s3;

    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;  
    cout << "s3: " << s3 << endl;
    cout << "s2 == s1: " << (s2 == s1) << endl;
    cout << "s2 != s1: " << (s2 != s1) << endl;
    cout << "s2 > s1: " << (s2 > s1) << endl;
    cout << "s2 < s1: " << (s2 < s1) << endl;
    cout << "s2 >= s1: " << (s2 >= s1) << endl;
    cout << "s2 <= s1: " << (s2 <= s1) << endl;

    cout << "Is s3 empty? " << s3.empty() << endl;

    s3 = s1;
    cout << "s3: " << s3 << endl;

    s1 += s2;
    cout << "s1: " << s1 << endl;
    s1 += " to you";
    cout << "s1: " << s1 << endl;

    cout << "s1 substring (0,14): " << s1.substr(0,14) << endl;
    cout << "s1 substring (15): " << s1.substr(15) << endl;

    string s4(s1);
    cout << "s4: " << s4 << endl;
    s4 = s4;
    cout << "s4: " << s4 << endl;

    s1[0] = 'H'; //[ ]不會檢查範圍
    s1[6] = 'B';
    cout << "s1: " << s1 << endl;
    s1.at(30) = 'D'; // This will throw an out_of_range exception (at會檢查範圍)

    return 0;
}