#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, cnt = 0;
	cin >> n;
	while(n != 0){
		if(n >= 100){
			n -= 100;
			cnt++;
		} else if(n >= 20){
			n -= 20;
			cnt++;
		} else if(n >= 10){
			n -= 10;
			cnt++;
		} else if(n >= 5){
			n -= 5;
			cnt++;
		} else if(n >= 1){
			n--;
			cnt++;
		}
	}
	cout << cnt << "\n";
	return 0;
}
