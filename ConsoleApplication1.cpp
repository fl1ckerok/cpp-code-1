#include <iostream>
using namespace std;

int main() {
    int a[10], b, c, d;
    int i = 0;
    cout << "Enter a number . . . (n > 0) // Made by Rostyslav" << endl;
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
    for (int y = i - 1; y > 0; y--) {
        cout << a[y] << " - seredni cifry" << endl;
    }
    cout << a[i] << " - ostannya cifra" << endl;

    cout << "_______________" << endl;

    int sum = 0;
    for (int l = 0; l < i + 1; l++) {
        sum += a[l];
    }
    cout << sum << " - summa cifr" << endl;
    int f;
    f = sum;
    if ((sum % 3) == 0) {
        // ______________________
        if (a[0] > 6) {
            int lich = 1;
            while (a[i - (i - lich)] > 6) {
                lich++;
            }
            cout << lich << " - lich" << endl;
            while (a[i - (i - lich)] < 10, a[i - (i - lich)] != a[0]) {
                a[i - (i - lich)] += 3;
            }
            if (a[i - (i - lich)] >= 10) {
                a[i - (i - lich)] -= 3;
            }
            cout << a[i - (i - lich)] << " - a[i - (i - lich)]" << endl;
            cout << lich << " - lich" << endl;
        }
        // ______________________
        else {
            while (a[0] < 7) {
                a[0] += 3;
            }
            if (a[0] >= 10) { // max 7, 8, 9
                a[0] -= 3;
            }
        }
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
        cout << " - in't % 3." << endl;
        while ((sum % 3) != 0) {
            if (a[0] > 8) {
                int k = 1;
                while (a[i - (i - k)] > 8) {
                    k++;
                }
                cout << k << " - k" << endl;
                a[i - (i - k)] += 1;
                cout << a[i - (i - k)] << " - a[i - (i - k)]" << endl;
                cout << k << " - k" << endl;
            }
            else {
                a[0]++;
            }
            sum = 0;
            for (int l = 0; l < i + 1; l++) {
                sum += a[l];
            }
            cout << sum << " - sum" << endl;
        }
        cout << a[0];
        for (int y = i - 1; y > 0; y--) {
            cout << a[y];
        }
        cout << a[i];
        cout << " - is your number." << endl;
        if ((sum % 3) == 0) {
            // ______________________
            if (a[0] > 6) {
                int lich = 1;
                while (a[i - (i - lich)] > 6) {
                    lich++;
                }
                cout << lich << " - lich (^_^)" << endl;
                while (a[i - (i - lich)] < 10, a[i - (i - lich)] != a[0]) {
                    a[i - (i - lich)] += 3;
                }
                if (a[i - (i - lich)] >= 10) {
                    a[i - (i - lich)] -= 3;
                }
                cout << a[i - (i - lich)] << " - a[i - (i - lich)]" << endl;
                cout << lich << " - lich" << endl;
            }
            // ______________________
            else {
                while (a[0] < 7) {
                    a[0] += 3;
                }
                if (a[0] >= 10) { // max 7, 8, 9
                    a[0] -= 3;
                }
            }
            cout << a[0];
            for (int y = i - 1; y > 0; y--) {
                cout << a[y];
            }
            cout << a[i];
            cout << " - is your number. (Finally)";
        }
    }
    return 0;
}