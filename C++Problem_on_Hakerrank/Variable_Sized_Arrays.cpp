#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    // Vector of vectors to store the variable-length arrays
    vector<vector<int>> arrays;

    // Read the arrays
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        vector<int> array(k);
        for (int j = 0; j < k; ++j) {
            cin >> array[j];
        }
        arrays.push_back(array);
    }

    // Process queries
    for (int i = 0; i < q; ++i) {
        int array_index, element_index;
        cin >> array_index >> element_index;
        cout << arrays[array_index][element_index] << endl;
    }

    return 0;
}
