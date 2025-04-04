#include <iostream>


size_t hash(std::string s){
	size_t h = 0;
	for(char c: s)
	{
		h = h * 2;

		h = h + (c%2);
	}
	return h;
}

int main(){
	std::cout << hash("hello") << std::endl;
}