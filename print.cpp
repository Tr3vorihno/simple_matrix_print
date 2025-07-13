// 13/07/2025

#include<iostream>
#include<string.h>
#include <chrono>
#include <thread>
using namespace std;
//======================================
//INSERT IN THIS CHAR VECTOR THE STRING YOU WANT TO PRINT
string str="Lorem ipsum dolor sit amet";
//======================================

int main(){
	const int dim = str.length();
	char b[dim];
	int i=0;
	for(int j=0; j<dim; j++){
		char a = '!';
		while(a!=str[i]){
			cout<<b<<a<<endl;
			a++;
			this_thread::sleep_for(chrono::milliseconds(1));
		}
		b[j] = a;
		i++;
	}
	cout<<b;
   return 0;
}
