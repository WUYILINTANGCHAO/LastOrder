#include "sister_allocation_table.h"

using namespace std;

SisterAllocationTable::SisterAllocationTable(){
	
}

SisterAllocationTable::~SisterAllocationTable(){
	
}

int SisterAllocationTable::getBlockValue(short id){
	return SisterAllocationTable::next[i];
}

void SisterAllocationTable::setBlockValue(short id,short value){
	SisterAllocationTable::next[id] = value;
}

