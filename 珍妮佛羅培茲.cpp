//arr[j + coin[i]] = min(arr[j] + 1, arr[j + coin[i]])
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int times;
	cin >> times;
	int coin[times];
	for (int i = 0; i < times; i++) {
		cin >> coin[i];
	}


	int arr[1001] = {};
	for (int i = 0; i <= 10000; i++) {
		arr[i] = 6900;
	}
	arr[0] = 0;
    sort(coin,coin + times);
	for (int i = 0; i < times; i++) {
		for (int j = 0; j <= 1000; j++) {
			if (arr[j] >= 0) {
				arr[j + coin[i]] = min(arr[j] + 1, arr[j + coin[i]]);
			}
		}
	}

	for (int i = 0; i <= 1000; i++) {
		if (arr[i] == 6900) {
			arr[i] = -1;
		} 
	}

	int decide = -1;
	while (decide != 0) {
		cin >> decide;
		cout << arr[decide] << "\n";
	}

}



