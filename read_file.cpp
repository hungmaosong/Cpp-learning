#include <iostream>
#include <string>
#include <fstream> //for input/output file
#include <cstdlib> //for exit

using namespace std;

int main()
{
    string name, headline;
    float proj, exam, total;

    ifstream inFile("outfile", ios::in); // 讀檔
    if (!inFile)
    { // 開檔失敗->報錯結束
        cerr << "Failed Opening!" << endl;
        exit(1);
    }

    getline(inFile, headline); //讀檔案第一行
    cout << headline << endl; 


    while (inFile >> name >> proj >> exam >> total)
    {
        cout << name << "\t" << proj << "\t" << exam << "\t" << total << endl;
    }

    return 0;
}