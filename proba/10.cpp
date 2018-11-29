#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;
int main(){
	int a,b,s=0;
	cout <<"podaj liczbe nr1 :"<<endl;
	cin>>a;
	for(int i=1;i<a;i++){
		if(!(a%i)){
			b+=i;
		}	
	}
	b--;
	for (int j=1;j<b;j++){
		if(!(b%j)){
			s+=j;
		}
	}
	system("cls");
	if (a==s-1 && a!=b){
		cout<<"liczba  " << b <<"  jest skojarzona" <<endl;
		
	}else{
	
		cout<<"liczba  " <<a<< "  nie jest skojarzona"<<endl;
	}
		return 0;
}
