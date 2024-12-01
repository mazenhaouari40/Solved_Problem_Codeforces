#include <iostream>
using namespace std;

// Function to find the minimum of two values
int min_b(int* a, int b) {
    if (*a < b) {
        return *a;
    } else {
        *a = b;
        return b;
    }
}

// Function to find the maximum of two values
int max_c(int* a, int b) {
    if (*a > b) {
        return *a;
    } else {
        *a = b;
        return b;
    }
}

// Function to swap two integers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to arrange the array
void arrange(int* t, int n) {
    int mx = 0;
    for (int i = 0; i < n; i++) {
        if (t[i] > t[mx]) {
            mx = i;
        }
    }
    swap(&t[0], &t[mx]);
    for (int i = 1; i < n; i++) {
        int minIndex = i; // Assume the current index is the minimum
        for (int j = i + 1; j < n; j++) {
            if (t[j] < t[minIndex]) {
                minIndex = j; // Update the index of the minimum element
            }
        }
        // Swap the found minimum element with the current element
        swap(&t[i], &t[minIndex]);
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a[1000], b[1000], c[1000], mx, mi, s;
        s = 0;
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        arrange(a, n); // Call arrange to sort the array

        mi = a[0];
        mx = a[0];
        b[0] = a[0];
        c[0] = a[0];

        for (int i = 1; i < n; i++) {
            b[i] = min_b(&mi, a[i]);
            c[i] = max_c(&mx, a[i]);
            s = s + (c[i] - b[i]);
        }

        cout << s << endl;
    }

    return 0;
}
