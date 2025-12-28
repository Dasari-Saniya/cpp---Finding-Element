#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, key;
    vector<int> arr;

    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cin >> key;
    cout << arr[key];

    return 0;
}

