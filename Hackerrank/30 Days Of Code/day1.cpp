#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    int i2;
    double d2;
    string s2;

    cin >> i2;
    cin >> d2;
    std::getline(std::cin, s2); // getline reads previous newline char here. lets read and ignore it.
    std::getline(std::cin, s2);
    cout << (i + i2) << endl;
    cout << setprecision(1) << fixed << (d + d2) << endl;
    cout << s + s2 << endl;
    return 0;
