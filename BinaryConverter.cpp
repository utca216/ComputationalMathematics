#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
	vector <int>aswint;
	vector <int>aswfloat;
	double Ip;
	int y=0, nk, inter;
	
	cin>>Ip>>nk;
	if(Ip<0){
		Ip=Ip*-1;
		cout<<"-";
	}	
		
	inter=Ip;
	Ip=Ip-inter;
	while(inter!=0){//находим целую часть в binary
		if(inter%2==1)
			aswint.push_back(1);
		else
			aswint.push_back(0);
		inter=inter/2;
	}
	while (true){
		y++;
		Ip=Ip*2;
		if(Ip>=1){
			Ip--;
			aswfloat.push_back(1);
		}
		else{
			aswfloat.push_back(0);
			if(y>=nk){
				break;
			}	
		}
	}
	
	
	for(int i=aswint.size()-1;i>=0;i--){
		cout<<aswint[i];
		}
	cout<<".";
	for(int i=0;i<aswfloat.size();i++){
		cout<<aswfloat[i];
		}				
}
