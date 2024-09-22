
#include <iostream> 
#include <set> 
using namespace std; 
int main(){
	set<long double> arr; 
	long double x,y=0; 
	x=0.742;
 while (true){
	x=x*2;
	if(x>1)
		x--;
	y++;
	arr.insert(x);
	cout<<x<<endl;
	if(arr.size()<y){
		cout<<arr.size()<<" done";
		break;
	}
	}	
 }

