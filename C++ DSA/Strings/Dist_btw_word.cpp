// The closest Distance Problem 

/*
Here we take Take any two Words From The string and we find the minimum Distance btw them 
*/

#include<iostream>
#include<limits.h>
using namespace std;


int dist(string name[],int size,string word1,string word2){
	int pos1=-1;
	int pos2=-1;
	int minDist=INT_MAX;
	
	for(int i=0;i<size;i++){
		if(name[i]==word1){
			pos1=i;
			if(pos2 != -1){
				minDist=min(minDist,abs(pos1-pos2));
			}
		}
		else if(name[i]==word2){
			pos2=i;
			if(pos1 != -1){
				minDist=min(minDist,abs(pos1-pos2));
			}
		}
	}
	
	if(minDist==INT_MAX) {return -1;}
	else{ return minDist;}
}


int main(){
	string str[]={"Hello","Hi","Bye","Iam"};
	int len=sizeof(str)/sizeof(str[0]);
	
	cout<<dist(str,len,str[0],str[2]);
return 0;

}

