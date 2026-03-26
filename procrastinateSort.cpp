#include <bits/stdc++.h>
#include <chrono>
#include <thread>
using namespace std;

// Check if array is sorted
bool isSorted(const vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] > arr[i + 1]) return false;
    }
    return true;
}

// Print array
void printArray(const vector<int>& arr) {
    for (int x : arr) cout << x << " ";
    cout << endl;
}

// Procrastinate Sort
void procrastinateSort(vector<int>& arr) {
    int n = arr.size();
    int iterations = 0;

    srand(time(0));

    while (!isSorted(arr)) {
        iterations++;

        // 😴 Lazy effort (biased towards small numbers)
        double r = (double)rand() / RAND_MAX;
        int effort = max(1, (int)(-log(r) * 2));  // exponential bias

        cout << "Iteration " << iterations << ": Doing " << effort << " swaps...\n";

        // Perform swaps
        for (int k = 0; k < effort; k++) {
            int i = rand() % n;
            int j = rand() % n;

            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }

        cout << "Current array: ";
        printArray(arr);

        // 😂 Random procrastination messages
        int event = rand() % 5;
        if (event == 0) cout << "Scrolling Instagram...\n";
        else if (event == 1) cout << "Watching one episode...\n";
        else if (event == 2) cout << "Thinking about life...\n";
        else if (event == 3) cout << "Opening YouTube...\n";
        else cout << "Just chilling...\n";

        // 😴 Sleep (procrastination delay)
        int sleepTime = rand() % 2000 + 500; // 0.5s to 2.5s
        cout << "Procrastinating for " << sleepTime << " ms...\n\n";

        this_thread::sleep_for(chrono::milliseconds(sleepTime));

        // 🔥 Panic mode (optional)
        if (iterations > 50) {
            cout << "🔥 PANIC MODE ACTIVATED: Sorting properly now!\n";
            sort(arr.begin(), arr.end());
            break;
        }
    }

    cout << "\n✅ Final Sorted Array: ";
    printArray(arr);
}

int main() {
    vector<int> arr = {5, 3, 8, 1, 2, 7,5,97,45,36,85,66,59,31,5, 12, 23, 42, 9, 4};

    cout << "Initial array: ";
    printArray(arr);
    cout << endl;

    procrastinateSort(arr);

    return 0;
}