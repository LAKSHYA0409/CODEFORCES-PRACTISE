#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    string queue;
    cin >> queue;

    while (t--) {
        for (int i = 0; i < n - 1; i++) {
            if (queue[i] == 'B' && queue[i + 1] == 'G') {
                swap(queue[i], queue[i + 1]);
                i++; 
            }
        }
    }

    cout << queue << endl;
    
    return 0;
}
