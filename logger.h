#include <iostream>
#include <string>

// #define sz(x) (int)(x).size()
// #define mp make_pair
// #define pb push_back
// #define f first
// #define s second
// #define lb lower_bound
// #define ub upper_bound
// #define all(x) x.begin(), x.end()
// #define rall(x) x.rbegin(), x.rend()
// #define ins insert

using std::cout;
using std::endl;
using std::pair;
using std::string;

template <typename T> inline void logger(const T &x);
template <typename T, typename V> inline void logger(const pair<T, V> &x) {
    cout << '{';
    logger(x.first);
    cout << ", ";
    logger(x.second);
    cout << '}' << endl;
}
template <typename T> inline void logger(const T &x) {
    int f = 0;
    cout << '{';
    for (auto &i : x)
        cout << (f++ ? ", " : ""), logger(i);
    cout << "}" << endl;
}
inline void logger(int x) { cout << x << endl; }
inline void logger(long x) { cout << x << endl; }
inline void logger(long long x) { cout << x << endl; }
inline void logger(unsigned x) { cout << x << endl; }
inline void logger(unsigned long x) { cout << x << endl; }
inline void logger(unsigned long long x) { cout << x << endl; }
inline void logger(float x) { cout << x << endl; }
inline void logger(double x) { cout << x << endl; }
inline void logger(long double x) { cout << x << endl; }
inline void logger(char x) { cout << '\'' << x << '\'' << endl; }
inline void logger(const char *x) { cout << '\"' << x << '\"' << endl; }
inline void logger(const string &x) { cout << '\"' << x << '\"' << endl; }
inline void logger(bool x) { cout << (x ? "true" : "false") << endl; }

template <typename T, typename... V> void _print(T t, V... v) {
    logger(t);
    if (sizeof...(v))
        cout << ", ";
    _print(v...);
}
inline void _print() { cout << "]\n"; }

// #define dbg(x...)                                                                                                      \
//     cout << "[" << __func__ << ":" << __LINE__ - 9 << " [" << #x << "] = [";                                           \
//     _print(x);                                                                                                         \
//     cout ;
// #define dbg(x...)
