#include <vector>
#include <iostream>

using std::vector;
using std::cout;

//4.2.3�ַ�������cin������
int main(int argc, char* argv[]) {
	using std::cin;

	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name: \n";
	//cinʹ�ÿո��Ʊ�������з�ȷ���ַ����Ľ���λ��
	//cin >> name;
	//getline��ȡ���У� ͨ���س�����Ļ��з���ȷ�������β���������滻�з�
	cin.getline(name, ArSize);
	cout << "Enter your favorite dessert:\n";
	//cin >> dessert;
	cin.getline(dessert, ArSize);
	cout << "I have some delicious " << dessert;

  std::cout << "Intput StreamDatas by cin\n";
  std::cin >> chs;
  std::cout << chs << std::endl;

  std::cin.get();

  memset(chs, 0, SIZE_CINCHARS);
  std::cout << "Intput StreamDatas by cin.get\n";
  std::cin.get(chs, SIZE_CINCHARS - 1);
  std::cout << chs << std::endl;

  std::cin.get();
  
	return 0;
}

//int main(int argc, char* argv[]) {
//	//char dog[6] = "cosmic";//��
//	char dog[7] = "cosmic";//��
//
//	return 0;
//}

//int main(int argc, char* argv[]) {
//	char dog[8] = { 'b', 'e', 'a', 'u', 'x', ' ', 'I', 'i' };
//	char cat[8] = { 'b', 'e', 'a', 'u', 'x', ' ', 'I', '\0' };
//
//	cout << dog << "\n";	//��ӡ��beaux Ii����E��; 4��
//	cout << cat << "\n";
//
//	return 0;
//}

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

