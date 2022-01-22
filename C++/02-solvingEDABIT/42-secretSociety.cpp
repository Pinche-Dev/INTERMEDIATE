std::string societyName(std::vector<std::string> friends) {
	std::string ret = "";
	std::sort(friends.begin(),friends.end());
	for (auto a:friends){
		ret+=a[0];
	}
	return ret;
}