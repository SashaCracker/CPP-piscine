#include <iostream>
#include <fstream>

void replace(std::string &s1, std::string &s2, std::string &filename,
			 std::ifstream &srcfile) {
	std::string buf;
	size_t pos;
	std::string tmp;
	std::ofstream newFile(filename + ".replace");
	while (!srcfile.eof())
	{
		getline (srcfile, buf);
		while (buf.find(s1) != std::string::npos)
		{
			pos = buf.find(s1);
			tmp.append(buf.substr(0, pos));
			tmp.append(s2);
			tmp.append(buf.substr(pos + s1.length()));
			buf= tmp;
			tmp.clear();
		}
		newFile << buf;
		if (!srcfile.eof())
			newFile << std::endl;
	}
	newFile.close();
}

int main(int argc, char **argv) {

	std::string filename, s1, s2;
	std::ifstream srcfile(filename);

	if (argc != 4) {
		std::cout << "Error: wrong number of arguments." << std::endl;
		return 1;
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty() || s1.empty()) {
		std::cout << "Error: arguments cannot be empty." << std::endl;
		return 1;
	}
	srcfile.open(filename);
	if (!srcfile.is_open()) {
		std::cout << "Error: file was not opened." << std::endl;
		return 1;
	}
	else
	{
		replace (s1, s2, filename, srcfile);
		srcfile.close();
	}
	return 0;
}
