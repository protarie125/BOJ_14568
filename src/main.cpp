#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{};
	cin >> n;

	auto ans = int{ 0 };
	for (auto a = 2; a < n; a += 2) {
		for (auto b = 1; b < n; ++b) {
			const auto& c = n - a - b;
			if (c <= 0) {
				break;
			}

			if (b + 2 <= c) {
				++ans;
			}
		}
	}

	cout << ans;

	return 0;
}