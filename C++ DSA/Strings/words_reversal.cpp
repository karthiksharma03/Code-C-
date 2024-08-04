
/*
Reverse The words in the string 

Like Hello Hi ->> olleH iH(This must be the Output of the story !!) 
*/

#include<iostream>
#include<string>
using namespace std;

// This is the Function where we can perform the  word reversal of a particular word on the string !!!
string revword(string str){
	int len=str.length();
	
	for(int i=0;i<len/2;i++){
		swap(str[i],str[len-i-1]);
	}
	
	return str;
}

// This is used to apply The word Reversal Operation to all the words present in the string !!

string reverwords(string str){
	string res=" ";
	string temp=" ";
	
	for(int i=0;i<str.length();i++){
		if(str[i]==' '){
			res=res+revword(temp);
			temp=" ";
		}
		
		else{
			temp=temp+str[i];
		}
	}
	
	res=res+revword(temp);
	
	return res; 
	
}

int main(){
	
	string str="Hello Sir Good Morning";
	
	cout<<reverwords(str);	
	
	
return 0;

}

