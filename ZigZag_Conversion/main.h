#include <string>

using std:: string;


class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1){
            return s;
        }

        string result = "";
        int n = s.length();
        int x = 2 * numRows - 2;
        for (int i = 0; i < n; i += x){
            result += s[i];
        }

        for (int i = 1; i < numRows - 1; i++){
            int h = 0;
            int k = i;
            while (k < n){
                if (h > 0){
                    result += s[k - 2 * i];
                }
                result += s[k];

                h += 1;
                k += x;
            }
            if (k - 2 * i < n and h > 0){
                result += s[k - 2 * i];
            }

        }

        for (int i = numRows - 1; i < n; i += x){
            result += s[i];
        }
        return result;
    }
};

// numRows = 3;
// PAYPALISHIRING
// 0, 4, 8, ... каждый 4(2 * numRows - 2) начиная с i = 0 по индексу
// 1, *3, 5, *7, 9, ... каждый 4(2 * numRows - 2) начиная с i = 1 по индексу плюс *
// 2, 6, 10, ... каждый 4(2 * numRows - 2) начиная с i = 2 по индексу плюс *
// 
// P___A___H___N
// A_P_L_S_I_I_G
// Y___I___R_
// 
// PAHNAPLSIIGYIR
// 
// numRows = 5;
// PAYPALISHIRINGHOWYOU
// x = 2 * numRows - 2
// j = i + 1 к слову
// 
// 0, 8, 16 можно вывести одним простым циклом O(n)
// (i = 1; i < numRows - 1; i++)
// i = 1, j = 2
// цикл второй (k = 1; k < n; k += x) с проверкой на нечётность k[добавляем (k - j) в случае нечётности перед основынм выводом], 1, (7), 9, (15), 17 * 
// i = 2, j = 3
// цикл второй (k = 2; k < n; k += x) с проверкой на нечётность k[добавляем (k - j) в случае нечётности перед основынм выводом], 2, (6), 10, (14), 18 *
// i = 3, j = 4
// цикл второй (k = 3; k < n; k += x) с проверкой на нечётность k[добавляем (k - j) в случае нечётности перед основынм выводом], 3, (5), 11, (13), 19 *
// 
// 4, 12, 20 можно вывести одним простым циклом O(n)
// 
// P_______H_______W
// A_____S_I_____O
// Y___I___R___H
// P_L_____I_G
// A_______N
// 
// 