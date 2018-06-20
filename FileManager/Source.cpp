#include <iostream>
#include <string>
#include "FileManager.h"


int main()
{
	FileManager fm;
	// cd - notice: not works in this app
	std::string path2 = "c:\\";
	fm.goToDirectory(path2);

	// dir
	fm.showAllFilesInCurrentDirectory();

	// mkdir
	std::string dir_name1 = "temp";
	fm.makeDirectory(dir_name1);

	// rmdir
	std::string dir_name = "temp";
	fm.deleteDirectory(dir_name);

	// echo ... > *.txt
	std::string text_and_file_name = "text > file.txt";
	fm.createFileWithRecord(text_and_file_name);

	// copy file
	std::string file_name1 = "file.txt";
	std::string path1 = ".\temp";
	fm.copyFile(file_name1, path1);

	// move file
	std::string file_name2 = "file.txt";
	std::string path = ".\temp";
	fm.cutFile(file_name2, path);

	// del file
	std::string file_name3 = "file.txt";
	fm.deleteFile(file_name3);

	//search file
	std::string file_name = "file.txt";
	fm.searchFile(file_name);

	std::cin.get();
	return 0;
}