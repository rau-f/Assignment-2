#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    int skill[5], playtime[5];
    for (int i = 0; i < 5; ++i) {
        cin >> skill[i];
    }
    for (int i = 0; i < 5; ++i) {
        cin >> playtime[i];
    }

    int max_skill_sum = -1;
    int player1 = -1, player2 = -1;

    for (int i = 0; i < 5; ++i) {
        for (int j = i + 1; j < 5; ++j) {
            if (playtime[i] + playtime[j] == T && abs(skill[i] - skill[j]) <= 50) {
                int skill_sum = skill[i] + skill[j];
                if (skill_sum > max_skill_sum) {
                    max_skill_sum = skill_sum;
                    player1 = i + 1; // 1-based index
                    player2 = j + 1; // 1-based index
                }
            }
        }
    }

    if (max_skill_sum == -1) {
        cout << -1 << endl;
    } else {
        cout << max_skill_sum << endl;
        cout << player1 << " " << player2 << endl;
        cout << skill[player1 - 1] << " " << skill[player2 - 1] << " ";
        cout << playtime[player1 - 1] << " " << playtime[player2 - 1] << endl;
    }

    return 0;
}
