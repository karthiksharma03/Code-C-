/*
In This Particular Section Of the Code I Have Solved A String Reversal which is 
perfomed with the help of the other string !!!...
*/

#include<iostream>
#include<string>


std::string rever_str(std::string str){
	std::string s;
	
	for(int i=str.length()-1;i>=0;i--){
		s.push_back(str[i]);
	}
	
	return s;
}

int main(){
	std::string name="Zig";
	std::cout<<"The Original String is :"<<name<<std::endl;
	std::cout<<"The Reversed String is :"<<rever_str(name);

return 0;

}

