#include "library2load.h"

size_t ShowLoadTimes() {    
    return Library2load_Class::GetSingleInstancePtr()->GetLoadedTimes();
}