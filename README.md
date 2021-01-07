#

---

Pull Request 前請確認以下事項：

* 已閱讀 [作業繳交方式](https://hackmd.io/@nssh/nscsc/%2F%40nssh%2Fsummit-homework)
* 在下方附上 Repl 連結
* 檔案放在自己學號的目錄下
* 標題以「班級座號、學號、姓名」作為開頭
* 其他說明事項可以在下面補充


輸入錢幣面額種類，並輸入錢幣面額。

最後有n個詢問，問X ( < 10000 ) 元最少需要幾個錢幣就能湊出。

輸入0代表結束。

若無法湊出這種幣值，請輸出-1
 
Sample input 1:

3

1 5 2

13

14

15

0

Sample output 1:

4

4

3

Sample input 2:

4

1 3 22 23

25

47

45

0

Sample output 2:

2

3

2


<h1>DP Hint:

arr[j + coin[i]] = min(arr[j] + 1, arr[j + coin[i]])</h1>

