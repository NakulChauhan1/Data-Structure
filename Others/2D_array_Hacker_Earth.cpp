// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int r,c;
	cin>>r>>c;            			// Reading input from STDIN
	int arr[r][c];

	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	cin>>arr[i][j];

	for(int i=0;i<r;i++){
	for(int j=0;j<c;j++)
	cout<<arr[i][j]<<" ";
	cout<<endl;
	}
}



/*
Using Vector of Vector (2D array)

#include <iostream>
#include<vector>
using namespace std;

int main() {
	int r,c;
	cin>>r>>c;            			// Reading input from STDIN

	vector<vector<int>> arr;
    arr.resize(r);
    for(int i = 0; i < r; ++i)
    arr[i].resize(c);

	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	cin>>arr[i][j];

	cout<<endl;

	for(int i=0;i<c;i++){
	for(int j=0;j<r;j++)
	cout<<arr[j][i]<<" ";
	cout<<endl;
	}
}

*/

