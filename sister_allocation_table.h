#ifndef SAT
#define SAT

using namespace std;

class SisterAllocationTable(){
	private :
		short next[65536];
	public :
		SisterAllocationTable();
		~SisterAllocationTable();
		short getBlockValue(short);
		void setBlockValue(short,short);
}

#endif
