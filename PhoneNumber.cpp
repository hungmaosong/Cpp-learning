#include <iomanip>
#include "PhoneNumber.h"
using namespace std;

ostream &operator <<(ostream &out, const PhoneNumber &num)
{
    out << "(" << num.areaCode << ") " << num.exchangeNum << "-" << num.serialNum;
    return out;
}

istream &operator >>(istream &in, PhoneNumber &num)
{
   in.ignore(); // Ignore '('
   in >> setw(2) >> num.areaCode;
   in.ignore(2); // Ignore ") "
   in >> setw(3) >> num.exchangeNum;
   in >> setw(4) >> num.serialNum;
   
    return in;
}

int main()
{
    PhoneNumber phone;
    cout << "Enter phone number in the format (XX) XXXXXXX: ";
    cin >> phone;
    cout << "You entered: " << phone << endl;
    return 0;
}

//練習operator overload
//使用者依照格式輸入電話號碼，並且將電話號碼以指定格式輸出