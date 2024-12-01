
#include <iostream>
#include <vector>
using namespace std;

// Function to read input into a vector
void read(vector<int>& t, int n) {
    t.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
}

// Function to remove an element at the given index from the vector
void supprimer(vector<int>& t, int indice) {
    if (indice >= 0 && indice < t.size()) {
        t.erase(t.begin() + indice);
    }
}

// Function to determine the new index for Alice's choice
int retourner(const vector<int>& a, int x) {
    if (!a.empty() && a[0] == x) {
        return 0;
    }
    if (!a.empty() && a.back() == x) {
        return a.size() - 1;
    }
    return -1; // Invalid index
}

// Function to determine Alice's initial choice
int choix(const vector<int>& a, const vector<int>& b) {
    if (a[0] == b[0] || a[0] == b.back()) {
        return 0;
    }
    if (a.back() == b[0] || a.back() == b.back()) {
        return a.size() - 1;
    }
    return -1; // Invalid choice
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a, b;
        read(a, n);
        read(b, n);

        int indice_a = choix(a, b);
        if (indice_a == -1) { // Invalid initial choice
            cout << "Alice" << endl;
            continue;
        }

        while (n > 1) {
            // Alice's choice
            int ele_a = a[indice_a];
            supprimer(a, indice_a);

            // Determine Bob's choice
            int ele_b = (b[0] == ele_a) ? b[0] : b.back();
            if (b[0] == ele_a) {
                supprimer(b, 0);
            } else {
                supprimer(b, b.size() - 1);
            }

            // Update size and Alice's next choice
            n--;
            indice_a = retourner(a, ele_b);
            if (indice_a == -1) { // No valid choice left
                break;
            }
        }

        // Determine the winner
        if (!a.empty() && !b.empty() && a[0] == b[0]) {
            cout << "Bob" << endl;
        } else {
            cout << "Alice" << endl;
        }
    }

    return 0;
}
