// Create a function which validates whether a bridge is safe to walk on (i.e. has no gaps in it to fall through).
// 
// Examples
// isSafeBridge("####") ➞ true
// 
// isSafeBridge("## ####") ➞ false
// 
// isSafeBridge("#") ➞ true

#include <algorithm>
bool isSafeBridge(std::string s) {


	return std::count(s.begin(), s.end(), ' ') == 0;
}