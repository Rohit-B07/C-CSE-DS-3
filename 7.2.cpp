//Array vector Statistics

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> evenNumbers;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenNumbers.push_back(arr[i]);
        }
    }

    cout << evenNumbers.size() << endl;

    return 0;
}