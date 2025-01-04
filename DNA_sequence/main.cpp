#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char dna[1000001];
    cin >> dna;

    int max_length = 0, current_length = 1;
    int n = strlen(dna);

    for (int i = 1; i < n; ++i) {
        if (dna[i] == dna[i - 1]) {
            current_length++;
        } else {
            if (current_length > max_length) {
                max_length = current_length;
            }
            current_length = 1;
        }
    }

    if (current_length > max_length) {
        max_length = current_length;
    }

    cout << max_length << endl;
    return 0;
}
