#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    int largest = arr[0], secondLargest = -1e9;
    int smallest = arr[0], secondSmallest = 1e9;

    for(int i=1; i<n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest)
            secondLargest = arr[i];

        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if(arr[i] < secondSmallest && arr[i] != smallest)
            secondSmallest = arr[i];
    }

    cout << secondSmallest << " " << secondLargest;
}
