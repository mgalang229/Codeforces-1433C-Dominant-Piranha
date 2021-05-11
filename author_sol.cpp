#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		int mx = 0;
		for (auto &it : a) {
			cin >> it;
			// find the maximum size of the piranha
			mx = max(mx, it);
		}
		// create 'idx' variable and store -1
		int idx = -1;
		for (int i = 0; i < n; i++) {
			if (a[i] != mx) {
				// if the current elements is not the maximum, then continue the loop
				continue;
			}
			if (i > 0 && a[i - 1] != mx) {
				// if the current element is not the first element and its previous
				// element is not the maximum, then it can be the possible answer
				idx = i + 1;
			}
			if (i < n - 1 && a[i + 1] != mx) {
				// if the current element is not the last element and its next
				// element is not the maximu, then it can be the possible answer
				idx = i + 1;
			}
		}
		cout << idx << '\n';
	}
	return 0;
}
