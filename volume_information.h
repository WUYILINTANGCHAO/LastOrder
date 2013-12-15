#ifndef VOLUME_INFORMATION_H
#define VOLUME_INFORMATION_H
#include <iostream>

using namespace std;

class VolumeInformation{
	private :
		string magicString;
		string namaPartisi;
		int jumlahByte;
		int filesystemCapacity;
		int freeBlock;
		int firstIdxBlock;
		char reserved[740];
		string sist;

	public : 
		VolumeInformation();
		VolumeInformation(string nama, int capacity, int _free, int _first);
		void setNama(string nama);
		void setCapacity(int capacity);
		void setFree(int _free);
		void setFirst(int _first);
		string getNama();
		int getCapacity();
		int getFree();
		int getFirst();
		void Print();
};
#endif
