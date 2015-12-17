
#include <map>
#include <string>
#include <iostream>

using namespace std;

int main(void)
{
	map<char, int> word_count;
	
	string word;
	while(cin >> word && word != "0")
	{
		for(int char_word=0;
			char_word!=word.length() ; ++char_word)
			
			++word_count[word[char_word]];
	}
	
	for(map<char, int>::iterator it=word_count.begin();
		it!=word_count.end(); ++it)
	cout << it->first << ":" << it->second << endl;
	
	return 0;
}
