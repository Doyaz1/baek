#include <iostream>
#include <cmath>

using namespace std;

int n;
pair<int, int> p[20];
double ans;

void dfs(int idx, int count, long long xSum, long long ySum) {
	if (count > n / 2) {
		return;
	}
	if (count + (n - idx) < n / 2) {
		return;
	}

	if (idx == n) {
		if (count == n / 2) {
			double result = sqrt((xSum * xSum) + (ySum * ySum));
			ans = min(ans, result);
		}
		return;
	}

	dfs(idx + 1, count + 1,
		xSum + p[idx].first,
		ySum + p[idx].second);

	dfs(idx +1, count,
		xSum - p[idx].first,
		ySum - p[idx].second);
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		cin >> n;

		for (int i = 0; i < n; i++) {
			cin >> p[i].first >> p[i].second;
		}

		ans = 1e9;
		dfs(0, 0, 0, 0);
		cout << fixed;
		cout.precision(12);
		cout << ans << '\n';
	}
	return 0;
}