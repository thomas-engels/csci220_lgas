#include <iostream>
#include <set>


size_t probed_indices(size_t table_size)
// Generates all the possible indices that will be visited using i^2 as our secondary hash function
//
{
	std::set<int> indices;
	for(int i = 0; i < table_size; i++)
	{
		indices.insert((i*i) % table_size);
	}
	return indices.size();
}

double max_load_factor(size_t table_size){
	size_t reachable_count = probed_indices(table_size);
	return (reachable_count - 1) / double(table_size);
}


int main()
{
	std::set<int> s;
	int m = 500;
	for (int i = 0; i < m; i++)
	{
		int index = i^2 % m;
		s.insert(index);
	}
}