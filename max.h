template <typename T> //函式模板，function 可自行帶入不同型別 => 程式碼一樣時使用(程式碼類似時用fuvtion overload)
T maximum(T a, T b, T c) {
    T max= a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}