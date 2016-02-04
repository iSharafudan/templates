//#pragma comment(linker, "/Stack: 256000000")
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <fstream>
#include <cmath>
#include <cstring>
#include <string>
#include <ctime>

#define all(a) (a).begin(), (a).end()
#define b(a) (a).begin()
#define e(a) (a).end()
#define PROB "game"
#define fir first
#define sec second
#define fori(l, r, s) for (int i = (l); i <= (r); i += (s))
#define ford(l, r, s) for (int i = (l); i >= (r); i -= (s))
#define s(a) (a).size()
#define l(a) (a).length()
#define pb(a) push_back(a)

using namespace std;

typedef map<int, int>::iterator it;
typedef double db;
typedef long double ldb;
typedef long long ll;

int solve();
void open();
int gen();
bool check();

const int inf = int(1e9 + 7);
const ll mod = 1e8 + 9;
const ll linf = ll(1e18 + 9);

int main() {
#ifdef _DEBUG
#else
    open();
#endif
    
    solve();
    return 0;
}

void open() {
#ifdef PROB
    freopen(PROB".in", "r", stdin);
    freopen(PROB".out", "w", stdout);
#else
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int solve() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    vector <int> x(n);
    fori(0, n - 1, 1)
        scanf("%d", &x[i]);
    
    sort(all(x));
    
    map <int, int> count;
    fori(0, n - 1, 1)
       count[x[i]]++;
    
    
    vector <int> all;
    vector <int> rep;
    for (map<int, int>::iterator i = b(count); i != e(count); i++) {
        if (i -> second == 1) {
            all.pb(i -> second);
        } else {
            rep.pb(i -> second);
        }
    }
    
    //temlate, not working.
    //Codeforces 100882:6
    
    return 0;
}
