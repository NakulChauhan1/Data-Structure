/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	vector<int> cord;
	while (t--){
		int n;
		cin>>n;
		vector< pair<int, int> > cord(n);
		for( int i = 0; i<n; i++ ){
			int x, y;
			cin>>x>>y;
			cord[i] = make_pair(x,y);   //push_back didnot work
		}
		int hx = cord[0].first, hy = cord[0].second;
		int lx = cord[0].first, ly = cord[0].second;

		/*for ( int i = 0; i<n; i++ )
			cout<<cord[i].first<< " "<<cord[i].second<<endl;*/

		for( int i = 0; i<n; i++ ){
			if ( cord[i].first > hx )
				hx = cord[i].first;
			if ( cord[i].second > hy )
				hy = cord[i].second;
			if ( cord[i].first < lx )
				lx = cord[i].first;
			if ( cord[i].second < ly )
				ly = cord[i].second;
		}
		cout<<hx<< " "<<hy<<endl;
		cout<<lx<< " "<<ly<<endl;
		

		int x_dist;
		int y_dist;

		if ( lx < 0 )
		{
			lx = - lx;
			x_dist = lx + hx;
		}
		else
		{
			x_dist = hx;
		}
		if( ly < 0 )
		{
			ly = - ly;
			y_dist = ly + hy;
		}
		else
		{
			y_dist =  hy;
		}

		int area;
		if ( x_dist >= y_dist )
			 area = x_dist * x_dist;
		else
		{
			area = y_dist * y_dist;
		}
			 
		cout<<area<<endl; 
	}
}
