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
bool isSpecial(std::string str) {
  if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" ||
      str == "+inf" || str == "nan")
    return true;
  return false;
}

bool isDouble(std::string str) {
  std::string::size_type i = 0;
  bool point = false;
  while (i < str.length()) {
    if (str[i] == '.') {
      if (!point)
        point = true;
      else
        return false;
    } else if (isdigit(str[i]) == 0)
      return false;
    i++;
  }
  if (!point)
    return false;
  // to do : overflow
  //   std::cout << std::numeric_limits<double>::max() << std::endl;
  //   std::cout << std::numeric_limits<double>::min() << std::endl;

  std::cout << "It's a double" << std::endl;
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
  if (isdigit(str[0]) == 1 || str.length() != 1)
    return false;
  std::cout << "It's a char" << std::endl;
  return true;
}

// voir si 2114678954f = float
bool isFloat(std::string str) {
  if ((isDouble(str.substr(0, str.length() - 1)) &&
       str[str.length() - 1] == 'f')) {
    std::cout << "It's a float" << std::endl;
    if (atof(str.c_str()) > std::numeric_limits<float>::max()) {
      std::cout << "Float max overflow" << std::endl;
      return false;
    };
    if (atof(str.c_str()) < std::numeric_limits<float>::min()) {
      std::cout << "Float min overflow" << std::endl;
      return false;
    };
    return true;
  }
  return false;
}

void convertInt(int i) {
  std::cout << "char: ";
  isPrintable(static_cast<char>(i))
      ? (std::cout << static_cast<char>(i) << std::endl)
      : (std::cout << "Not displayable" << std::endl);

  std::cout << "int: ";
  std::cout << static_cast<int>(i) << std::endl;

  std::cout << "float: ";
  std::cout << std::fixed << static_cast<float>(i) << "f" << std::endl;

  std::cout << "double: ";
  std::cout << std::fixed << static_cast<double>(i) << std::endl;
}

void convertChar(char str) {
  std::cout << "char: ";
  std::cout << static_cast<char>(str) << std::endl;

  std::cout << "int: ";
  std::cout << static_cast<int>(str) << std::endl;

  std::cout << "float: ";
  std::cout << std::fixed << static_cast<float>(str) << "f" << std::endl;

  std::cout << "double: ";
  std::cout << std::fixed << static_cast<double>(str) << std::endl;
}

void convertFloat(double f) {
  std::cout << "char: ";

  double intpart;
  double fractpart = modf(f, &intpart);
  (isPrintable(static_cast<char>(f)) && fractpart == 0)
      ? (std::cout << static_cast<char>(f) << std::endl)
      : (std::cout << "Not displayable" << std::endl);

  std::cout << "int: ";
  if (f >= 2147483647 || f <= -2147483648)
    std::cout << "Overflow" << std::endl;
  else
    std::cout << (static_cast<int>(f)) << std::endl;

  std::cout << "float: ";
  std::cout << std::fixed << static_cast<float>(f) << "f" << std::endl;

  std::cout << "double: ";
  std::cout << std::fixed << static_cast<double>(f) << std::endl;
}

void convertDouble(double d) {
  std::cout << "char: ";

  double intpart;
  double fractpart = modf(d, &intpart);

  (isPrintable(static_cast<char>(d)) && fractpart == 0)
      ? (std::cout << static_cast<char>(d) << std::endl)
      : (std::cout << "Not displayable" << std::endl);

  std::cout << "int: ";
  if (d >= 2147483647 || d <= -2147483648)
    std::cout << "Overflow" << std::endl;
  else
    std::cout << (static_cast<int>(d)) << std::endl;

  std::cout << "float: ";
  if (d >= std::numeric_limits<float>::max() ||
      d <= std::numeric_limits<float>::min())
    std::cout << "Overflow" << std::endl;
  else
    std::cout << std::fixed << static_cast<float>(d) << "f" << std::endl;

  std::cout << "double: ";
  std::cout << std::fixed << static_cast<double>(d) << std::endl;
}

void convertSpecial(std::string str) {
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
  if (isFloat(str))
    return (FLOAT);
  if (isDouble(str))
    return (DOUBLE);
  if (isInt(str))
    return (INT);
  if (isChar(str))
    return (CHAR);
  if (isSpecial(str))
    return SPEC;
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
      case NONE: {
        std::cout << "Invalid input." << std::endl;
      }
    }

  } else {
    std::cout << "Wrong number of arguments." << std::endl;
  }
  return 0;
}