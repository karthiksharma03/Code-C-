/*
	Sort The Characters In the Strings In an Alphabetical Order !!!
*/

#include<iostream>

using namespace std;

string sor_print(string str){
	
	for(int i=0;i<str.length()-1;i++){
		for(int j=0;j<str.length()-i-1;j++){
			if(str[j]>str[j+1]){
				swap(str[j],str[j+1]);
			}
		}
	}
	
	return str;
}

int main(){

	string name="karthik";
	
	cout<<"The Sorted String is :"<<sor_print(name);
return 0;

}

