#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double lowerLimit=3.14, upperLimit=4.71;//пределы интегрирования
	double differenceLimits=upperLimit-lowerLimit;
	int numberOfNumbers=20;//количество чисел которые возьмёт компьютер чтобы для нахождения среднего f(r), не совсем рандомных
	differenceLimits=differenceLimits/(numberOfNumbers+1);
	double r=lowerLimit+0.5*differenceLimits,rFr=0;
		
	for(int i=0;i<=numberOfNumbers;i++){
		rFr+=sin(r);//для функции sin x
		cout<<sin(r)<<" "<<r<<endl;
		r+=differenceLimits;
		}
	rFr=rFr/numberOfNumbers;//среднее арифметическое между найденных f(r)
	cout<<rFr*(upperLimit-lowerLimit);		
	}
