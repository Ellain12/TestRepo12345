#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main()
{
	std::string cPath(fs::current_path());
	system(std::string("printf " + cPath + "|xclip -sel clip").c_str());
}