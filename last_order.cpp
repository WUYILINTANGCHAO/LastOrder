#include "volume_information.h"
#include "sister_allocation_table.h"
#include "root_directory.h"
#include "data_pool.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

VolumeInformation vi;
SisterAllocationTable sat;
RootDirectory rd;
//DataPool dp;

void readFile(char* file){
	string line;
	string whole = "";
  	ifstream myfile (file);
  	if (myfile.is_open())
  	{
    	while ( getline (myfile,line) )
    	{
      		whole = whole + line;
    	}
    	myfile.close();
	  	// Volume Information
	  	string svi = "";
	  	for (int i=0;i<1024;i++){
			svi = svi + whole[i];
		}
		vi.load(svi);
	  	// Sister Allocation Table
		string ssat = "";
		int offset = 1024;
	  	for (int i=0;i<128*1024;i++){
			ssat = ssat + whole[offset+i];
		}
		sat.load(ssat);
	  	// Root Directory
		string srd = "";
		offset+= 128*1024;
	  	for (int i=0;i<1024;i++){
			svi = svi + whole[offset+i];
		}
		rd.load(srd);
	  	// Data Pool
		string sdp = "";
		offset+=1024
	  	for (int i=offset;i<whole.length();i++){
			svi = svi + whole[i];
		}
		dp.load(sdp);
	}
  	else 
  		cout << "Unable to open file"; 
}

void writeFile(char* file){
	string whole;
	ofstream myfile (file);
	if (myfile.is_open()){
		whole = whole + vi.toString();		
		whole = whole + sat.toString();
		whole = whole + rd.toString();
		whole = whole + dp.toString();
		myfile << whole;
		myfile.close();
	}
	else 
		cout << "Unable to open file";
}

void generateFile(string namaFile){

}

// ./LastOrder /mnt/hd/sisterfs sister.fs
// ./LastOrder /mnt/hd/sisterfs sister.fs shift

int main(int argc, char *argv[]){
	
	if (argc < 3 || argc > 4) {
		cout << "Shift failed, invalid parameter[s]" << endl;
	}
	else if (argc == 3){
		cout << "Shift success" << endl;
		cout << argv[2] << "c" << endl;
		readFile(argv[2]);
	}
	else if (argc == 4){
		if (strcmp(argv[3],"shift") == 0){
			cout << "Shift success" << endl;
			string str = argv[1];
			//generateFile(str);
		}
		else {
			cout << "Shift failed, invalid parameter[s]" << endl;
		}
	}
}
