#include <iostream>
using namespace std;

int main() {

    int T;
    cin >> T;

    int skill[5];
    int time[5];

    bool valid_pair = false;

    for (size_t i = 0; i < 5; i++)
        cin >> skill[i];
    for (size_t i = 0; i < 5; i++)
        cin >> time[i];


    int ip1 = 0, ip2 = 0, cmb_skl = 0, final_cmb_skl = 0;

    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = i+1; j < 5; j++)
        {
            int timeSum = time[i] + time[j];
            int skillDiff = skill[i] - skill[j];
            if (timeSum == T && skillDiff >= -50 && skillDiff <= 50)
            {
                cmb_skl = skill[i] + skill[j];
                if (final_cmb_skl < cmb_skl)
                {
                    final_cmb_skl = cmb_skl;
                    ip1 = i;
                    ip2 = j;
                }
                valid_pair = true;
            }
            
        }
        
    }

    if (valid_pair)
    {
        cout << final_cmb_skl << endl;
        cout << ip1+1 << " " << ip2+1 << endl;
        cout << skill[ip1] << " " << skill[ip2] << " " << time[ip1] << " " << time[ip2] << endl; 
    } else 
        cout << "-1" << endl;


    return 0;
}