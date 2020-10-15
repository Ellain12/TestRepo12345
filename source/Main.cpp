#include "getPwd.hpp"


int main()
{
    std::string cPath = getPwd();
    loadToClipboard(cPath);
}