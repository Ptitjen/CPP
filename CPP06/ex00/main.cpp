#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <string>

#define NONE 0
#define INT 1
#define FLOAT 2
#define DOUBLE 3
#define CHAR 4
#define SPEC 5

bool isPrintable(char c) {
  if (static_cast<int>(c) < 32 || static_cast<int>(c) > 126)
    return false;
  return true;
}

bool isSpecial(std::string& str) {
  if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" ||
      str == "+inf" || str == "nan")
    return true;
  return false;
}

bool isDouble(std::string str) {
  char* pEnd;
  double result;
  result = strtod(str.c_str(), &pEnd);
  if (str[str.length() - 1] == 'f')
    return false;
  if (result == HUGE_VAL) {
    std::cout << "Double overflow" << std::endl;
    return false;
  }
  return true;
}

bool isInt(std::string str) {
  int start = 0;
  if (str[0] == '-')
    start = 1;
  for (std::string::size_type i = start; i < str.length(); i++)
    if (isdigit(str[i]) == 0)
      return false;
  if (str[0] != '-' &&
      (str.length() > 10 || (str.length() == 10 && (str > "2147483647")))) {
    std::cout << "Int max overflow" << std::endl;
    return false;
  }
  if (str[0] == '-' &&
      (str.length() > 11 ||
       (str.length() == 11 && (str.substr(1, str.length()) > "2147483648")))) {
    std::cout << "Int min overflow" << std::endl;
    return false;
  }
  return true;
}

bool isChar(std::string str) {
  if (isdigit(str[0]) != 0 || str.length() != 1)
    return false;
  return true;
}

bool isFloat(std::string str) {
  if ((isDouble(str.substr(0, str.length() - 1)) &&
       str[str.length() - 1] == 'f')) {
    char* pEnd;

    if (std::strtod(str.substr(0, str.length() - 2).c_str(), &pEnd) >
        std::numeric_limits<float>::max()) {
      std::cout << "Float max overflow" << std::endl;
      return false;
    };
    if (std::strtod(str.substr(0, str.length() - 2).c_str(), &pEnd) <
        -std::numeric_limits<float>::max()) {
      std::cout << "Float min overflow" << std::endl;
      return false;
    };
    return true;
  }
  return false;
}
bool isOtherStr(std::string str) {
  if (isalpha(str[0]) != 0 && str.length() > 1)
    return true;
  return false;
}

void convertInt(int i) {
  std::cout << "char: ";
  if (i > std::numeric_limits<char>::max() ||
      i < std::numeric_limits<char>::min())
    std::cout << "Overflow" << std::endl;
  else if (!isPrintable(static_cast<char>(i)))
    (std::cout << "Non displayable" << std::endl);
  else
    std::cout << "'" << static_cast<char>(i) << "'" << std::endl;

  std::cout << "int: ";
  std::cout << static_cast<int>(i) << std::endl;

  std::cout << "float: ";
  std::cout << std::fixed << std::setprecision(1) << static_cast<float>(i)
            << "f" << std::endl;

  std::cout << "double: ";
  std::cout << std::fixed << std::setprecision(1) << static_cast<double>(i)
            << std::endl;
}

void convertChar(char str) {
  std::cout << "char: ";
  std::cout << "'" << str << "'" << std::endl;

  std::cout << "int: ";
  std::cout << static_cast<int>(str) << std::endl;

  std::cout << "float: ";
  std::cout << std::fixed << std::setprecision(1) << static_cast<float>(str)
            << "f" << std::endl;

  std::cout << "double: ";
  std::cout << std::fixed << std::setprecision(1) << static_cast<double>(str)
            << std::endl;
}

void convertFloat(double f) {
  std::cout << "char: ";
  double intpart;
  double fractpart = modf(f, &intpart);
  if (f > std::numeric_limits<char>::max() ||
      f < std::numeric_limits<char>::min())
    std::cout << "Overflow" << std::endl;
  else if (!isPrintable(static_cast<char>(f)) || fractpart != 0)
    (std::cout << "Non displayable" << std::endl);
  else
    std::cout << "'" << static_cast<char>(f) << "'" << std::endl;

  std::cout << "int: ";
  if (f >= 2147483647 || f <= -2147483648)
    std::cout << "Overflow" << std::endl;
  else
    std::cout << (static_cast<int>(f)) << std::endl;

  if (fractpart == 0) {
    std::cout << "float: ";
    std::cout << std::fixed << std::setprecision(1) << static_cast<float>(f)
              << "f" << std::endl;

    std::cout << "double: ";
    std::cout << std::fixed << std::setprecision(1) << static_cast<double>(f)
              << std::endl;
  } else {
    std::cout << "float: ";
    std::cout << static_cast<float>(f) << "f" << std::endl;

    std::cout << "double: ";
    std::cout << static_cast<double>(f) << std::endl;
  }
}

void convertDouble(double d) {
  std::cout << "char: ";

  double intpart;
  double fractpart = modf(d, &intpart);
  if (d > std::numeric_limits<char>::max() ||
      d < std::numeric_limits<char>::min())
    std::cout << "Overflow" << std::endl;
  else if (!isPrintable(static_cast<char>(d)) || fractpart != 0)
    (std::cout << "Non displayable" << std::endl);
  else
    std::cout << "'" << static_cast<char>(d) << "'" << std::endl;

  std::cout << "int: ";
  if (d >= 2147483647 || d <= -2147483648)
    std::cout << "Overflow" << std::endl;
  else
    std::cout << (static_cast<int>(d)) << std::endl;

  std::cout << "float: ";
  if (d >= std::numeric_limits<float>::max() ||
      d <= -std::numeric_limits<float>::max())
    std::cout << "Overflow" << std::endl;
  else {
    if (fractpart == 0)
      std::cout << std::fixed << std::setprecision(1) << static_cast<float>(d)
                << "f" << std::endl;
    else
      std::cout << static_cast<float>(d) << std::endl;
  }
  std::cout << "double: ";
  if (fractpart == 0)
    std::cout << std::fixed << std::setprecision(1) << static_cast<double>(d)
              << "f" << std::endl;
  else
    std::cout << static_cast<double>(d) << std::endl;
}

void convertSpecial(std::string& str) {
  if (str == "-inff" || str == "-inf") {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: -inff" << std::endl;
    std::cout << "double: -inf" << std::endl;
  }
  if (str == "+inff" || str == "+inf") {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: +inff" << std::endl;
    std::cout << "double: +inf" << std::endl;
  }
  if (str == "nanf" || str == "nan") {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
  }
}

int getArgType(std::string str) {
  if (isSpecial(str))
    return SPEC;
  if (isChar(str))
    return (CHAR);
  if (isOtherStr(str))
    return NONE;
  if (isInt(str))
    return (INT);
  if (isFloat(str))
    return (FLOAT);
  if (isDouble(str))
    return (DOUBLE);

  return NONE;
}

int main(int argc, char** argv) {
  if (argc == 2) {
    std::string str = argv[1];

    int type = getArgType(str);

    switch (type) {
      case INT: {
        convertInt(atoi(str.c_str()));
        break;
      }
      case DOUBLE: {
        convertDouble(atof(str.c_str()));
        break;
      }
      case FLOAT: {
        convertFloat(atof((str.substr(0, str.length() - 1)).c_str()));
        break;
      }
      case CHAR: {
        convertChar(str[0]);
        break;
      }
      case SPEC: {
        convertSpecial(str);
        break;
      }
      case NONE: {
        std::cout << "Invalid input." << std::endl;
      }
    }

  } else {
    std::cout << "Wrong number of arguments." << std::endl;
  }
  return 0;
}