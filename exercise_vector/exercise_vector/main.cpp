#include <stdio.h>
#include <windows.h>
int main() {
	//char buffer[40];
	TCHAR buffer[40];
	//const char* s = "COM11";
	LPCSTR s = "COM11";

	snprintf((char*)buffer, 13, "\\\\\\\\.\\\\%s", s);

	printf((char*)buffer);

	return 0;
}