#include <iostream>
#include <cmath>

using namespace std;

bool isqure(int x) {
    int root = sqrt(x);
    return root * root == x;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int count = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (!isqure(x)) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
