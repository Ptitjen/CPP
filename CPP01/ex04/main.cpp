#include <string.h>

#include <fstream>
#include <iostream>

std::string FtReplace(std::string buffer, std::string s1,
                      std::string const& s2) {
  std::string cpy;
  std::string::size_type i = 0;
  std::string::size_type j = 0;

  while (i < buffer.length()) {
    j = 0;
    while (j < s1.length()) {
      if (buffer[i + j] == s1[j])
        j++;
      else
        break;
    }
    if (j == s1.length()) {
      cpy.append(s2);
      i += s1.length();
    } else {
      cpy.append(1, buffer[i]);
      i++;
    }
  }
  return (cpy);
}

int main(int argc, char** argv) {
  if (argc == 4) {
    std::string file = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string buffer;

    std::ifstream ifs(argv[1]);
    if (!ifs.is_open()) {
      std::cout << "Invalid infile" << std::endl;
      return (1);
    }
    std::getline(ifs, buffer, '$');
    ifs >> buffer;
    ifs.close();

    std::ofstream ofs(file.append(".replace"));
    if (!ofs.is_open()) {
      std::cout << "Invalid outfile" << std::endl;
      return (1);
    }
    if (!buffer.empty()) {
      ofs << FtReplace(buffer, s1, s2);
    }
    ofs.close();
  } else
    std::cout << "Invalid number of arguments";
  return (0);
}