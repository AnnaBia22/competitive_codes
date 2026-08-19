//https://neps.academy/br/exercise/1554

#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define op ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int gcdExtended(int a, int b, int& x, int& y){
	if (a == 0){
		x = 0; y = 1;
		return b;
	}

	int x1, y1;
	int gcd = gcdExtended(b%a, a, x1, y1);

	x = y1 - (b/a)*x1; 
	y = x1;

	return gcd;
}

bool findSolution(int a, int b, int c, int& x, int& y){
	if (a == 0 && b == 0){
		if (c == 0){
			x = y = 0;
			return true;
		}
		return false;
	}

	int gcd = gcdExtended(abs(a), abs(b), x, y);

	if( a < 0 ) 
        x = -x; 
	if( b < 0 ) 
        y = -y; 

	if (c%gcd != 0)
		return false;

	int t = c/gcd;
	x *= t; y *= t;

	return true;
}

int32_t main(){
    op
	int a, b, c;
	cin >> a >> b >> c;
	int x, y;
	if( !findSolution(a, b, c, x, y) ) 
        cout << "-1" << endl;
	else 
        cout << "1" << endl << x << " " << y << endl;
}

