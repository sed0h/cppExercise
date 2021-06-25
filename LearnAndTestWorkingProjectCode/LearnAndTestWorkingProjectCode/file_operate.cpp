#include <stdio.h>
#include <cstdint>

#define MAX_COUNT_2READ 10

//int main() {
//    FILE *pf_script;
//  
//    fopen_s(&pf_script, "D:\\1work\\uds_related_projs\\gac_uds\\output\\win32\\sc.txt", "r");
//    if (pf_script != NULL) {
//      while (!feof(pf_script)) {
//        char s[MAX_COUNT_2READ] = {0};
//        if (fgets(s, MAX_COUNT_2READ, pf_script) != NULL) {
//          uint8_t size = 0;
//          while ((s[size] != '\0') && (s[size] != '\n')) {
//            printf("string is: %c", s[size++]);      
//          }
//          
//        }
//    }
//  }
//	return 0; 
//}