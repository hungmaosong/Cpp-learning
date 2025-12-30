#include <vector>
#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    const int size = 8;
    int init_array[size] = {29, 10, 14, 37, 13, 5, 42, 21};
    vector<int> v(size);
    int insert, moveItem;

    cout << "Initial array: ";
    for(int i = 0; i < size; i++){
        v[i] = init_array[i];
        cout << setw(4) << v[i];
    }
    cout << endl;

    cout << "Sorting process:" << endl;
    for(int i = 1; i < size; i++){
        insert = v.at(i); //要比較的元素
        moveItem = i; //要移動的位置

        while (moveItem > 0 && v.at(moveItem-1) > insert) //從已排序的陣列中找出插入位置
        {
            v.at(moveItem) = v.at(moveItem-1); //元素後移
            moveItem--;
        }
        v.at(moveItem) = insert; //插入元素到正確位置

        for(int k = 0; k < size; k++){
            cout << setw(4) << v.at(k);
        }
        cout << endl;
    }

    return 0;
}