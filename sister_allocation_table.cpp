#include "sister_allocation_table.h"

using namespace std;

SisterAllocationTable::SisterAllocationTable(){
	for (int i=1;i<=65535;i++){
		SisterAllocationTable::next[i] = 0;
	}
}

SisterAllocationTable::SisterAllocationTable(string str){
	int idx = 0;
	for (int i=1;i<=65535;i++){
		SisterAllocationTable::next[i] = str[idx]*256+str[idx+1];
		idx+=2;
	}
}

SisterAllocationTable::~SisterAllocationTable(){
	
}

unsigned short SisterAllocationTable::getBlockValue(int id){
	return SisterAllocationTable::next[id];
}

void SisterAllocationTable::setBlockValue(int id,unsigned short value){
	SisterAllocationTable::next[id] = value;
}

string SisterAllocationTable::toString(){
	string str;
	for (int i=1;i<=65535;i++){
		str = str + "  ";
	}
	
	int idx = 0;
	for (int i=1;i<=65535;i++){
		str[idx] = SisterAllocationTable::next[i]/256;
		str[idx+1] = SisterAllocationTable::next[i]%256;
		idx+=2;
	}
	return str;
}

/*
int main(){
	SisterAllocationTable sisterAllocationTable;
}
*/
