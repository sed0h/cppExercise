#include <vector>
#include <iostream>

using std::vector;
using std::cout;

int main(int argc, char* argv[]) {
	char dog[8] = { 'b', 'e', 'a', 'u', 'x', ' ', 'I', 'i' };
	char cat[8] = { 'b', 'e', 'a', 'u', 'x', ' ', 'I', '\0' };

	cout << dog << "\n";	//´òÓ¡£ºbeaux IiÌÌÌÌE¶ø; 4þï
	cout << cat << "\n";

	return 0;
}

//int main(int argc, char* argv[]) {
//	int n_elem = 5;
//	vector<int> vt(n_elem);
//
//
//	vt.push_back(6);
//	vt.push_back(9);
//	vt.push_back(10);
//
//	int val = vt.size();
//
//	cout << val << "\n";
//
//	return 0;
//}

