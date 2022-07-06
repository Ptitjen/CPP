/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:40:21 by jeulliot          #+#    #+#             */
/*   Updated: 2022/07/06 10:55:27 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/* 1. Creates str, stringPTR and stringREF */
/* 2. Prints the memory adress of str, stringPTR and stringREF */
/* 3. Prints the value of str and the value pointed to by stringPTR and
 * stringREF */
int main(void) {
  std::string str = "HI THIS IS BRAIN";
  std::string* stringPTR = &str;
  std::string& stringREF = str;

  std::cout << std::endl;
  std::cout << "Adress of str :" << std::endl;
  std::cout << &str << std::endl << std::endl;
  std::cout << "Adress held by stringPTR :" << std::endl;
  std::cout << stringPTR << std::endl << std::endl;
  std::cout << "Adress held by stringREF :" << std::endl;
  std::cout << &stringREF << std::endl << std::endl;

  std::cout << "Value of str :" << std::endl;
  std::cout << str << std::endl << std::endl;
  std::cout << "Value pointed to by stringPTR :" << std::endl;
  std::cout << *stringPTR << std::endl << std::endl;
  std::cout << "Value pointed to by stringREF :" << std::endl;
  std::cout << stringREF << std::endl << std::endl;

  return (0);
}
