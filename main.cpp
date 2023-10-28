#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char tababc[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	string tabmorse[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
	string  morse; //= ".-/-.../-.-.";
	string tmp;
	string tmptmp;
	bool full = false;
	cout<<"Podaj kod morsa do odszyfrowania"<<endl;
	cin>>morse;
	int a = 0;
	string koniec;
		int pozycjakoniec = morse.length();
		int pozycjastart = 0;
		while(a<morse.length()){
			if(morse[a] != '|'){
				tmp = tmp + morse.substr(pozycjastart, 1); 
				pozycjastart = a + 1;
				pozycjakoniec = pozycjakoniec + a;
				cout<<tmp<<endl;
				tmptmp = "";
			} else{
				tmptmp = tmp;
				tmp = "";
				pozycjastart = a + 1;
				cout<<tmptmp<<endl;
			}
			if(pozycjastart >= morse.length()){
				tmptmp = tmp;
			}
			for(int c = 0; c<26; c++){
				if(tmptmp == tabmorse[c]){
				koniec = koniec + tababc[c];
				}
			}
			a++;
		}
	cout<<koniec<<endl;
	return 0;
}

