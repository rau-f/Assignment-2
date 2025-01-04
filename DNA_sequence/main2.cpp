#include <iostream>
#include <string>
using namespace std;

int main() {

    string str;
    getline(cin, str);

    int max_count = 0, count = 1;
    int size = str.length();
    int i = 0, j = 1;


    while (i != size)
    {
        while (str[i] == str[j]) {
            count++;
            j++;
        }

        if (max_count < count)
            max_count = count;

        count = 1;

        i = j++;
    }

    cout << max_count << endl;

    return 0;
}