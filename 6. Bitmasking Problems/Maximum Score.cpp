#include<bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl '\n'

const int mod = 1e9 + 7;
const int INF = 1e18 + 5;
const double PI = 3.1415926535;
const double eps = 1e-9;

int matrixScore(vector<vector<int>> grid){
	int m = grid.size();
	int n = grid[0].size();

	// flipping row bits
	for(int i=0;i<m;i++){
		if(grid[i][0]==0){
			for(int j=0;j<n;j++){
				grid[i][j]^=1;
			}
		}
	}

	//flipping columns
	for(int j=0;j<n;j++){
		int s = 0;
		for(int i=0;i<m;i++){
			s = s+grid[i][j];
		}

		int z = n-s;
		if(z>s){
			for(int i=0;i<m;i++)
				grid[i][j]^=1;
		}
	}

	int ans = 0;
	for(int i=0;i<m;i++){
		int num = 0;
		int mul = 1;
		for(int j=n-1;j>=0;j--){
			num = num + (grid[i][j])*mul;
			mul = mul*2;
		}
		ans = ans + num;
	}

	return ans;
}

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<vector<int>> grid = {{0,0,1,1},{1,0,1,0},{1,1,0,0}};
	vector<vector<int>> grid2 = {{0,1},{1,1}};
	int ans2 = mateixScore(grid2);

	int ans = mateixScore(grid);
	cout<<ans2<<endl;
	cout<<ans<<endl;

	return 0;
}