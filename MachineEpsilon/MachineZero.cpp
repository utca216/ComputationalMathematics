#include <bits/stdc++.h>  
using namespace std;
int main() 
{
	double Z=1;
	int n=0;
	while(2*Z>Z){
		n++;
		Z=Z/10;
		cout<<Z<<endl;
		}
	
	cout<<n;	 
}
