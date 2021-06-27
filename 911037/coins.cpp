#include <iostream>
using namespace std;

int main() {
  int m;
  scanf("%d",&m);

  int a[m];
  for (int i = 0; i < m; i++) {
    scanf("%d",&a[i]);
  }

  for (int i = 0; i < m; i++) {
    for (int j = i + 1; j < m; j++) {
      if (a[i] > a[j]) {
        int vemp;
        vemp = a[i];
        a[i] = a[j];
        a[j] = vemp;
      } 
    }
  }

  int n;
  scanf("%d",&n);

  while (n != 0) {
    int money[n + 1];
    money[0] = 1;
    for (int j = 1; j <= n; j++) {
        money[j] = 0;
    }

    for (int i = m - 1; i >= 0; i--) {
      for (int j = 0; j <= n; j++) {
        if (money[j] > 0) {
          if (j + a[i] <= n) {
            if (money[j + a[i]] == 0) {
              money[j + a[i]] = money[j] + 1;
            } else if (money[j] + 1 < money[j + a[i]]) {
              money[j + a[i]] = money[j] + 1;
            }
          }
        }
      }
    }

    if (money[n] == 0) {
      printf("-1");
    } else {
      printf("%d\n",money[n] - 1);
    }

    scanf("%d",&n);
  }
}
