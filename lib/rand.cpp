#include <bits/stdc++.h>
using namespace std;

mt19937_64 rd(chrono::steady_clock::now().time_since_epoch().count());
long long rand(long long l, long long r) {
    if (r-l+1 == 0) return l;
    return rd()%(r-l+1)+l;
}

