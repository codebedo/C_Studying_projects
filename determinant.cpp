#include <iostream>
#include <cmath>

using namespace std;

const int MAXN = 105;

double a[MAXN][MAXN];

double determinant(int n){
	
	double det = 1.0;
	for (int i = 0 ; i < n; i++){
		int pivot = i ;
		for (int j = i + 1; j < n; j++){
			if(abs(a[j][i] ) > abs(a[pivot][i])){
				pivot = j;
			}
		}
		if (pivot != i){
			swap(a[i], a[pivot]);
			det *= -1;
		}
		if(a[i][i] == 0) {
			return 0;
		}
		det *= a[i][i];
		for(int j = i + 1 ; j < n; j++){
			double factor = a[j][i] / a[i][i];
			for (int  k = i + 1; k < n; k++){
				a[j][k] -= factor * a[i][k];
			}
		}
	}
}
