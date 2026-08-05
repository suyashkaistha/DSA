#include <iostream>
using namespace std;
int main() {
    int num, reverse = 0;
    cout << "Enter a number: ";
    cin >> num;
    while (num != 0) {
        int last = num % 10;       
        reverse = reverse * 10 + last;
        num = num / 10;             
    }
    cout << "Reversed number: " << reverse << endl;
    return 0;
}