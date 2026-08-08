#include<bits/stdc++.h>
using namespace std;
int main() {
	int arr[3][4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int min=INT_MAX;
	for(int i=0; i<3; i++) {
		int max=INT_MIN;
		for(int j=0; j<4; j++) {
			if(arr[i][j]>max) {
				max=arr[i][j];
			}
		}
		if(max<min) {
			min=max;
		}
	}cout<<min;
}