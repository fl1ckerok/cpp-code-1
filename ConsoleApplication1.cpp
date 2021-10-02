#include <iostream>
using namespace std;

int main() {
    int a[10], b, c, d;
    int i = 0;
    cout << "Enter a number..." << endl;
    cin >> b;
    cout << b << " - your number." << endl;
    c = b;
    d = b;
    int y = 1;
    if (b > 0) {
        while (b >= 10) {
            b = ((b - (b % 10)) / 10);
            a[y] = b % 10;
            y++;
            i++;
        }
    }
    else {
        while (b <= -10) {
            b = ((b - (b % 10)) / 10);
            a[y] = b % 10;
            y++;
            i++;
        }
    }
    a[0] = b;
    a[i] = c % 10;
    cout << i << endl;
    cout << a[0] << " - 1-a cifra" << endl;
    for (int y = i-1; y > 0; y--) {
        cout << a[y] << " - seredni cifry" << endl;
    }
    cout << a[i] << " - ostannya cifra" << endl;

    cout << "_______________" << endl;

    int sum = 0;
    for (int l = 0; l < i + 1; l++) {
        sum += a[l];
    }
    cout << sum << " - summa cifr" << endl;
    if ((sum % 3) == 0) {
        while (a[0] < 10) {
            a[0] += 3;
        }
        if (a[0] >= 10) { // max 7, 8, 9
            a[0] -= 3;
        }
        // ______________________
        if (a[0] == 7 || 8 || 9) {
            int lich = 1;
            if (a[i - (i - lich)] < 7) {
                while (a[i - (i - lich)] < 7) {
                    a[i - (i - lich)] += 3;
                }
                cout << a[i - (i - lich)] << endl;
            }
            else {
                lich++;
                while (a[i - (i - lich)] < 7) {
                    a[i - (i - lich)] += 3;
                }
                cout << a[i - (i - lich)] << endl;

            }
        }
        // ______________________
        cout << a[0];
        for (int y = i - 1; y > 0; y--) {
            cout << a[y];
        }
        cout << a[i];
        cout << " - is your number.";
    }
    else {
        cout << a[0];
        for (int y = i - 1; y > 0; y--) {
            cout << a[y];
        }
        cout << a[i];
        cout << " - in't % 3.";
    }
    return 0;
}