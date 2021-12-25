#include <iostream>
#include <vector>
using namespace std;

std::vector<std::vector<int>> reverseImage(std::vector<std::vector<int>> image) {
	for (int i=0;i<image.size();i++){
		for (int j=0;j<image[j].size();j++){
			if (image[i][j]==0){
				image[i][j]=1;
			}else{
				image[i][j] =0;
			}
		}
	}
	return image;
}

std::vector<std::vector<int>> reverseImage(std::vector<std::vector<int>> image) {
	for(auto &a:image)
		for(auto &n:a)
			n=!n;
	return image;
}


int main()
{

}
