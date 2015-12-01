#include <iostream> 
#include <fstream>
#include <string>
using std::ifstream;
using std::ofstream;
using std::cout;
using std::cin;
using std::string;

int main(int argc, char *argv[]) { 
	string myStr;
	//FOR ONE ARGUMENT
	if (argc == 1) {
		while (!cin.eof()){
			getline(cin, myStr);
			cout << myStr<< "\n";
		}
	//FOR THE REST	
	} else {
		for (int i=1;i<argc;i++) {
		  ifstream in(argv[i]);
			while (!in.eof()){
			  getline(in, myStr);
			  cout << myStr << "\n";
			}
		  in.close();
		}
	}
return 0;
}
 