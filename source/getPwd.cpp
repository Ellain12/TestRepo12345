#include "getPwd.hpp"

#include <filesystem>

std::string getPwd()
{
    return std::filesystem::current_path();
}

void loadToClipboard(const std::string& pwd)
{
    system(std::string("printf "+ pwd + "|xclip -sel clip").c_str());
}