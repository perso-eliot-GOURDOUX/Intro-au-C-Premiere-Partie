#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> tableau = {10, 20, 30, 40, 50};
    vector<string> tableau_char = {"A_", "B_", "C_", "D_", "E_"};

    for (auto &i : tableau) {
        cout << i << endl;
    }
    for (auto &i : tableau_char) {
        cout << i << endl;
    }

    return 0;
}
