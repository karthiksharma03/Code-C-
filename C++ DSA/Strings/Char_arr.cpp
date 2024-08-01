/*
Reverse a String Using A character Array !!
Palindrome Check !!!

At First Step Find The Length of the String which has been taken into Input Consideration !!
*/

#include<iostream>

using namespace std;

// Here We Have Perfomed the Get lenght Operation..
int get_length(char arr[]){
	int count=0;
	for(int i=0;arr[i]!='\0';i++){
		count++;
	}
	
	return count;
}


// Here We have Performed The String Reversal Operation !!!
void str_reverse(char arr[],int n){
	int start=0;
	int end=n-1;
	while(start<end){
		swap(arr[start++],arr[end--]);
	}
	
	cout<<arr;
}

bool chk_palindrome(char arr[],int n){
	int start=0;
	int end=n-1;
	
	while(start<=end){
		if(arr[start]!=arr[end]) return 0;
		else {
			start++;
			end--;
		}
	}
	
	return 1;
}

// The Check Palindrome Method 2 Using Strings And Characters  Here This is used where to condider the removal of all non alpha numeric value and concebrt string 
// to the lower

bool pali_ch(string s){
	string str;
	
	for(char ch:s){
		if(isalnum(ch)){
			str+=tolower(ch);
		}
	}
	
	int start=0;
	int end=n-1;
	
	while(start<=end){
		if(arr[start]!=arr[end]) return 0;
		else {
			start++;
			end--;
		}
	}
	
	return 1;
}

int main(){
	char name[]="madam";
	int n=get_length(name);
	
//	str_reverse(name,n);
	
	bool res=chk_palindrome(name,n);
	cout<<res;
	
	

return 0;

}

