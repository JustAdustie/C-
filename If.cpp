#include <iostream>
using namespace std;
int main()
{
	int x,y,z;
	cin >> x >> y >> z;
	if (x > z & x > y & y > z  ){   
		cout << x << " " << z;
	} 
	else {
		if (x > z & x > y & z >  y ){   
		cout << x << " " << y;
	} 
	}
	
	if (z > x & z > y & x > y  ){
		cout << z << " " << y;
	}
	
	if (y > x & y > z & x > z  ){
		cout << y << " " << z;
	}
	else {
		if (y > x & y > z & z > x  ) {
			cout << y << " " << x;
		}
	}
	
	if (z > x & z > y & y > x  ){
		cout << z << " " << x;
	}
		

	
	return 0;
}
