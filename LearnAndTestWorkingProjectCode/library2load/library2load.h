#pragma once
class Library2load_Class {
 private:
    size_t _times;

 public:
    static Library2load_Class& GetSingleInstance(void) {
        static Library2load_Class single_obj;
        return single_obj;
    }
    static Library2load_Class* GetSingleInstancePtr(void) {
        static Library2load_Class single_obj;
        return &single_obj;
    }

    Library2load_Class();
    size_t GetLoadedTimes();

  
};
