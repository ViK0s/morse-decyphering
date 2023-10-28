#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char tababc[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	string tabmorse[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
	string  morse = ".-/-...";
	cout<<morse.length()<<endl;
	string tmp;
	cout<<"Podaj kod morsa do odszyfrowania"<<endl;
	//cin>>morse;
	int a = 0;
	string koniec;
	//while(koniec != true)
		int pozycjakoniec = morse.length();
		int pozycjastart = 0;
		while(a<morse.length()){
			if(morse[a] != '/'){
				tmp = morse.substr(pozycjastart, pozycjakoniec); 
				pozycjastart = a + 1;
				pozycjakoniec = a;
				cout<<tmp<<endl;
			} 
			for(int c = 0; c<26; c++){
				if(tmp == tabmorse[c]){
				koniec = koniec + tababc[c];
				}
			}
		a++;
		}
	cout<<koniec<<endl;
	return 0;
}
