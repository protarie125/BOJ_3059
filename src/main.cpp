#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto target = int{ 0 };
	for (auto c = 'A'; c <= 'Z'; ++c) {
		target += c;
	}

	auto t = int{};
	cin >> t;
	while (0 < (t--)) {
		auto be = vector<bool>(26, false);

		auto s = string{};
		cin >> s;

		auto ans = target;
		for (const auto& c : s) {
			if (be[c - 'A']) {
				continue;
			}

			ans -= c;
			be[c - 'A'] = true;
		}

		cout << ans << '\n';
	}

	return 0;
}