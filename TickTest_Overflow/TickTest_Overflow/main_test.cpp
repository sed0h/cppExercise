#include <cstdint>
#include <Windows.h>
#include <iostream>
#define CLOSE_TIMEOUT 3000
#define NOW (0xFFFFFFFF - 3001)
int main() {
	//uint8_t test_times = 10;
	//while (test_times > 0) {
	//	{
	//		uint32_t now = GetTickCount();//CDL_SYS_GetTickCount();
	//		uint32_t stop_tick = now + CLOSE_TIMEOUT;
	//		uint32_t base = 0;

	//		if (stop_tick < now) {
	//			base = 0xFFFFFFFF;
	//			while (1) {
	//				if ((GetTickCount() % base) >= stop_tick) {
	//					break;
	//				}
	//			}
	//		} else {
	//			while (1) {
	//				if (GetTickCount() >= stop_tick) {
	//					break;
	//				}
	//			}
	//		}
	//		
	//		std::cout << "start, tick is: " << now << " stop tick is:" << stop_tick << "\n";
	//		std::cout << "break! tick is: " << GetTickCount() << "\n\n";

	//		test_times--;

	//	}
	//}

	uint8_t i = 1 - 60;
	printf("i = %d", i);
		 

	return 0;

}