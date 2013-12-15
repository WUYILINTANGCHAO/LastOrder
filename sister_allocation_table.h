#ifndef __SAT
#define __SAT
#include <string>

using namespace std;

class SisterAllocationTable {
	private :
		unsigned short next[65536];
	public :
		SisterAllocationTable();
		SisterAllocationTable(string);
		~SisterAllocationTable();
		unsigned short getBlockValue(int);
		void setBlockValue(int,unsigned short);
		string toString();
};

#endif
