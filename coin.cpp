#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a;
    cin >> a;
    int coin[a];
    for (int i = 0; i < a; i++) {
        cin >> coin[i];
    }

    int input;
    vector<int> ans;
    while (true) {
        cin >> input;
        if (input == 0) {
            break;
        }

        int lab[input + 1];
        for (int i = 0; i <= input; i++) {
            lab[i] = -1;
        }
        lab[0] = 0;

        for (int i = 0; i < a; i++) {
            for (int j = 0; j < input; j++) {
                if (lab[j] != -1 && j + coin[i] <= input) {
                    if (lab[j + coin[i]] == -1) {
                        lab[j + coin[i]] = lab[j] + 1;
                    } else if (lab[j + coin[i]] >= lab[j] + 1) {
                        lab[j + coin[i]] = lab[j] + 1;
                    }
                }
            }
        }   

        if (lab[input] == -1) {
            ans.push_back(-1);
        } else {
            ans.push_back(lab[input]);
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
}
