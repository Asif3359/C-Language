#include <iostream>

using namespace std;

const int MAX_LENGTH = 101; 

int max_polygons(int freq[], int max_length) {
    int polygons = 0;
    for (int i = 1; i <= max_length; ++i) {
        if (freq[i] >= 3) { 
            polygons += freq[i] / 3; 
        }
    }
    return polygons;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int freq[MAX_LENGTH] = {0}; 
        int max_length = 0;

        for (int i = 0; i < n; i++) {
            int length;
            cin >> length;
            freq[length]++;
            max_length = max(max_length, length); 
        }

        int polygons = max_polygons(freq, max_length);
        cout << polygons << endl;
    }

    return 0;
}
