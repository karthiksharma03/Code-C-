/*
Roman Table Conversion ...

I->1
V->5
X-10
L-50
C-100
D-500
M-1000

So The Problem Statement is :
Given a string in roman form, 
the task is to convert this given roman string into an integer.

Note : This can be done by the Concept of Assigning The Key-pair Values to that 
particular Character !!
*/
#include<iostream>

using namespace std;

int value(char r){
	if(r=='I') return 1;
	if(r=='V') return 5;
	if(r=='X') return 10;
	if(r=='L') return 50;
	if(r=='C') return 100;
	if(r=='D') return 500;
	if(r=='M') return 1000;
	
	return -1;
}

int ro_deci(string &str){
	int sum=0;
	
	for(int i=0;i<str.length();i++){
		int k=value(str[i]);
		
		if(i+1<str.length()){
			int g=value(str[i+1]);
			
			if(k>g){
				sum=sum+k;
				i++;
			}
			
			else{
				sum=sum+(g-k);
			}
		}
		
		else{
			sum=sum+k;
		}
	}
	
	return sum;

}

int main(){
	
	string name="IX";
	cout<<ro_deci(name);

return 0;

}

