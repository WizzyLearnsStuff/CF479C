#include<iostream>
#include<vector>
#include<tuple>
#include<algorithm>
#include<iterator>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> v(n);

	for (auto &e : v) {
		cin >> e.first >> e.second;
	}

	sort(v.begin(), v.end());

	int l = -1;
	for (auto p : v) {
		if (l <= p.second) {
			l = p.second;
		}
		else l = p.first;
	}
	cout << l;
}
