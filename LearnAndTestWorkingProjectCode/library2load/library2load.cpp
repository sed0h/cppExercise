#include "library2load.h"

Library2load_Class::Library2load_Class() { _times = 0; }

size_t Library2load_Class::GetLoadedTimes() {
	_times++;
	return _times; 
}

