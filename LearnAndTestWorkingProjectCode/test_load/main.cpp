#pragma comment(lib, "test_library.lib") 

#include <stdio.h>
#include <iostream>
#include "../library2load/Interface.h"
#include <Windows.h>

using std::cout;

int main() {
	void *handle = nullptr;
	LPCWSTR lib = TEXT("libtest_library");//L����Pָ�룬W���ַ�,STR�ַ���==>һ��ָ����ַ�����ָ��;
	handle = LoadLibrary(lib);
    if (nullptr == handle) {
		cout << "load failed!! error:" << GetLastError() << "\r\n";
	}
	
	for (size_t i = 0; i < 10; i++) {
        cout << "load start:" << ShowLoadTimes() << "\r\n"; 
	}
}
