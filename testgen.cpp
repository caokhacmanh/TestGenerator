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

str s, icldFile, stmp;

int main(){
	cout << "Cpp file to include: ";
	cin >> icldFile;
	s = "#include \"" + icldFile + "\"\n";
	system("touch testgen_template.cpp");
	fstream fin("/home/admin/testGenerator/template.cpp", fstream::in);
	fstream fout("./testgen_template.cpp", fstream::out);
	while(getline(fin, stmp)){
		s += stmp+"\n";
	}
	fout << s;
	fin.close();
	fout.close();
	system("g++ ./testgen_template.cpp -o testgen_template");
	system("./testgen_template");
	system("rm ./testgen_template.cpp");
	system("rm ./testgen_template");

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
