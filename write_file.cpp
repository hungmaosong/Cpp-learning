#include <iostream>
#include <string>
#include <fstream> //for input/output file
#include <cstdlib> //for exit

using namespace std;

int main(){
    string name;
    float proj, exam;

    ofstream outFile("outfile",ios::out); //寫檔(若已存在就複寫)
    if(!outFile){ //開檔失敗->報錯結束
        cerr << "Failed Opening!" << endl;
        exit(1);
    }

    cout << "Enter Name Project Exam each line.\n" << "EOF(ctrl+D for UNIX ctrl+z for windows) to finish\n" << "?";
    outFile << "Name\tProject\tExam\ttotal\n";

    while (cin >> name >> proj >> exam)
    {
        outFile << name << "\t" << proj << "\t" << exam << "\t" << proj*0.3 + exam*0.7 << endl;
        cout << "?";
    }
    cout << endl;

    return 0;
}