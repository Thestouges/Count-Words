#include <iostream>
#include <string>

using namespace std;

void main(){
	string input;
	int count = 0;

	cout<<"Enter a string/sentence:";
	getline(cin, input);

	for(int i = 0; i < input.length()-1; i++){
		if(input[i] == ' ')
			count++;
	}

	if(count > 0)
		count++;

	cout<<"String/sentence has "<<count<<" words"<<endl;
}