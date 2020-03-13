#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <cmath>

using namespace std;

vector<int> v;

void init() {
	queue<int> q;
	q.push(4); q.push(7);
	while (true) {
		int n = q.front(); q.pop();
		if (n < 1000) v.push_back(n); else break;
		q.push(n * 10 + 4); q.push(n * 10 + 7);
	}
}

void solve() {
	int n; cin >> n;
	for (int i = 0; i < v.size() && v[i] <= n; i++)
		if (n % v[i] == 0) {
			cout << "YES\n";
			return;
		}
	cout << "NO\n";
}


int main() {
	init();
	solve();
	return 0;
}