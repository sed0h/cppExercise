#pragma once

struct p {
  int a;
  char b;
  short c;

} pp;  //__attribute__((aligned(4))) pp;
struct m {
  char a;
  int b;
  short c;

} mm;  //__attribute__((aligned(4))) mm;
struct o {
int a;
char b;
short c;

} oo;
struct x {
int a;
char b;
struct p px;
short c;

} xx;  //__attribute__((aligned(8))) xx;
//  int main() { 
//	printf("sizeof(int)=%d,sizeof(short)=%d.sizeof(char)=%d\n", sizeof(int),
//              sizeof(short), sizeof(char));
//    printf("pp=%d,mm=%d \n", sizeof(pp), sizeof(mm));//8, 12
//    printf("oo=%d,xx=%d \n", sizeof(oo), sizeof(xx));//8, 
//
//	return 0; 
//}