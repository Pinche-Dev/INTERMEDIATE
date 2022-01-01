int sumOfEvens(std::vector<std::vector<int>> arr) {
	int retur=0;
	for (auto a:arr){
		for (auto x:a){
			if (x%2==0){
				retur+=x;
			}
		}
	}
	return retur;
}