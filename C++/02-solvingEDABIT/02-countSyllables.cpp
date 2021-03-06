// Create a function that counts the number of syllables a word has. Each syllable is separated with a dash -.


// Examples
// numberSyllables("buf-fet") ➞ 2
// 
// numberSyllables("beau-ti-ful") ➞ 3
// 
// numberSyllables("mon-u-men-tal") ➞ 4
// 
// numberSyllables("on-o-mat-o-poe-ia") ➞ 6
// Notes
// Don't forget to return the result.
// If you get stuck on a challenge, find help in the Resources tab.
// If you're really stuck, unlock solutions in the Solutions tab.

// USER::: jidoct
int numberSyllables(std::string word) {
 return std::count(word.begin(),word.end(),'-') + 1;
}
int numberSyllables(std::string word) {
	int ans = 1;
	for (int i = 0; i < word.length(); i++)
	{
		if (word[i] == '-')
			ans++;
	}
	return ans;
}

