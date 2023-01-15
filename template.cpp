#include <bits/stdc++.h>
using namespace std;

// boost & macro
#pragma optimize("O3")
#define nmax 200005
#define pint pair<int, int>
#define pong pair<ll, ll>
#define pool pair<bool, bool>
#define vint vector<int>
#define vong vector<ll>
#define stkii stack<int>
#define stkll stack<long long>
#define fi first
#define se second
typedef string str;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uii;

#define oo 1e18

str tostr(int n){ // code from Kubogi <3
    stringstream ss;
    ss << n;
    str s; ss >> s;
    if (n < 10) s = "000"+s;
    else if (n < 100) s = "00"+s;
    else if (n < 1000) s = "0"+s;
    
    return s;
}

int main(){
	str testdir, sol;
	ll l, r;
	cout << "Tests directory: ";
	cin >> testdir;
	cout << "Solution (without .cpp): ";
	cin >> sol;
	cout << "Tests range (l, r): ";
	cin >> l >> r;
	str stmp = "mkdir " + testdir;
	system(stmp.c_str());
	system("touch input.inp");
	system("touch output.out");
	str togcc = "g++ " + sol + ".cpp -o " + sol;
	system(togcc.c_str());
	for(ll i = l; i <= r; ++i){
		maketest(); // Function included
		str stmp = "cp input.inp " + testdir + "/" + tostr(i) + ".inp";
		system(stmp.c_str());
		stmp = "./"+sol;
		system(stmp.c_str());
		stmp = "cp output.out " + testdir + "/" + tostr(i) + ".out";
		system(stmp.c_str());
		cerr << "Test " << i << "\n";
	}
	system("rm input.inp");
	system("rm output.out");

}

// COMMENT:

/* <<<CODE EXPLANATION>>>



*/


/* <<<CRE>>>

I, Sheyer, guaranteed that the idea for this code is personally made up by me: <Sheyer>
In case it is not, I give credit to the original Author:

I, Sheyer, guaranteed that this code is originally created by me, based on the idea mentioned above: <Sheyer>

In belief of h1a4c3k, a long lost account

*/

