#include "Cplusplus.h"
int main() {
	Data d1 = { 11,1,100011,"a" };
	Data d2 = { 1,2,100011,"a" };
	Data d3 = { 21,3,100011,"a" };
	Data d4 = { 7,4,100011,"a" };
	Cplusplus cpp;
	cpp.vctVirtual.push_back(&d1);
	cpp.vctVirtual.push_back(&d2);
	cpp.vctVirtual.push_back(&d3);
	cpp.vctVirtual.push_back(&d4);
	cpp.sort();
	//cpp.copyData();	
	int x = 0;
}
