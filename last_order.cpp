#include "volume_information.h"
#include "sister_allocation_table.h"
#include "root_directory.h"
#include "data_pool.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

VolumeInformation vi;
SisterAllocationTable sat;
//RootDirectory rd;
//DataPool dp;

void readFile(){

}

void writeFile(){
	
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
