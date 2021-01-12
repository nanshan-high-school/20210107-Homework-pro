#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a;
	cin >> a;
	int coin[a];
	for (int i = 0; i < a; i++) {
		cin >> coin[i];
	}
	sort(coin,coin + a);
	
	int arr[10000 + 1] = {};
	for (int i = 0; i <= 10000; i++) {
		arr[i] = 12345;
	}
	arr[0] = 0;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j <= 10000; j++) {
			if (arr[j] >= 0) {
				arr[j + coin[i]] = min(arr[j] + 1, arr[j + coin[i]]);
			}
		}
	}
	for (int i = 0; i <= 10000; i++) {
		if (arr[i] == 12345) {
			arr[i] = -1;
		} 
	}
	int Q = -1;
	while (Q != 0) {
		cin >> Q;
		cout << arr[Q] << "\n";
	}
		
}
// 輸入錢幣面額種類，並輸入錢幣面額。

// 最後有n個詢問，問X ( < 10000 ) 元最少需要幾個錢幣就能湊出。

// 輸入0代表結束。

// Sample input 1:

// 3

// 1 5 2

// 13

// 14

// 15

// 0

// Sample output 1:

// 4

// 4

// 3

// Sample input 2:

// 4

// 1 3 22 23

// 25

// 47

// 45

// 0

// Sample output 2:

// 2

// 3

// 2

// DP Hint:
// arr[j + coin[i]] = min(arr[j] + 1, arr[j + coin[i]])