// 13/07/2025

#include<iostream>
#include<string>

using namespace std;

int lenght(char v[]);
void riempiStr(char v[],int dim);


//======================================
//INSERT IN THIS CHAR VECTOR THE STRING YOU WANT TO PRINT
char str[]="Lorem ipsum dolor sit amet";
//======================================

int main(){
	const int dim = lenght(str);
	char b[dim];
	//riempiStr(b,dim); // used to put a "filler" into the printed text
	int i=0;
	for(int j=0; j<dim; j++){
		char a = '!';
		while(a!=str[i]){
			cout<<b<<a<<endl;
			a++;
			//system("cls");
		}
		b[j] = a;
		i++;
	}
	cout<<b;
   return 0;
}
int lenght(char v[]){
	int i=0;
	for(i=0; v[i]!='\0'; i++);
	return i;
}
void riempiStr(char v[],int dim){
	int i;
	for(i=0; i<dim; i++){
		v[i]='*';
	}
	v[i]='\0';
}
