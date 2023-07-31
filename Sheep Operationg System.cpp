#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;

string filen[10010];
string filex[10010];

void load(){
	ifstream fin ("file.txt");
    ofstream fout ("file.txt");
    cout << "Loading Files...";
    
    Sleep(1000);
	
	int length;
	fin >> length;
	length -= 1;
	for(int i = 0; i < length; i++){
		fin >> filen[i] >> filex[i];
		cout << filen[i] << filex[i];
	}
}

void saveto(string fname, int pro){
	ifstream fin ("file.txt");
    ofstream fout ("file.txt");
    int fileco;
    fin >> fileco;
    fout << fname << " " << fname;
}

int main(){
	ifstream fin ("file.txt");
    ofstream fout ("file.txt");
    saveto("lol", ".txt");
    load();
	return 0;
} 
