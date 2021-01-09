#include <iostream>
using namespace std;

int main(){
    int cost[10000]={0}, a, total;
    for(int i=1 ; i<10000 ; i++){
        cost[i] = 10001;
    }
    cin >> total;
    int coin[total];
    for(int i=0 ; i<total ; i++){
        cin >> coin[i];
        for(int j=0 ; j+coin[i]<10000 ; j++){
            cost[j+coin[i]]=min(cost[j]+1, cost[j+coin[i]]);
        }
    }
    for(int i=0 ; i<10000 ; i++){
        if (cost[i]==10001){
            cost[i] = -1;
        }
    }
    do {
        cin >> a;
        cout << cost[a];
    }while( a != 0 );
}
