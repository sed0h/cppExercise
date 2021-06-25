#pragma comment(lib, "test_library.lib") 

#include <stdio.h>
#include <iostream>
#include "../library2load/Interface.h"
#include <Windows.h>

using std::cout;

int main() {
	void *handle = nullptr;
	LPCWSTR lib = TEXT("libtest_library");//L长，P指针，W宽字符,STR字符串==>一个指向宽字符串的指针;
	handle = LoadLibrary(lib);
    if (nullptr == handle) {
		cout << "load failed!! error:" << GetLastError() << "\r\n";
	}
	
	for (size_t i = 0; i < 10; i++) {
        cout << "load start:" << ShowLoadTimes() << "\r\n"; 
	}
}
