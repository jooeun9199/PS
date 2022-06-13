#include <deque>
#include <iostream>
#include <string>
using namespace std;
main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, n, i, x;
    cin >> t;
    while (t--) {
        deque<int> q;
        string s, num;
        cin >> s >> n >> num;
        i = 1;
        while (n--) {
            x = 0;
            while (num[i] != ',' and num[i] != ']') {
                x *= 10;
                x += num[i++] - '0';
            }
            i++;
            q.push_back(x);
        }

        bool rev = 0, err = 0;
        for (char c : s) {
            if (c == 'R')
                rev = !rev;
            else {
                if (q.empty()) {
                    err = 1;
                    cout << "error" << endl;
                    break;
                }
                rev ? q.pop_back() : q.pop_front();
            }
        }
        if (!err) {
            if (rev) {
                cout << "[";
                while (q.size()) {
                    cout << q.back();
                    q.pop_back();
                    if(q.size())cout << ",";
                }
            } else {
                cout << "[";
                while (q.size()) {
                    cout << q.front();
                    q.pop_front();
                    if(q.size())cout << ",";
                }
            }
            cout << "]\n";
        }
    }
}