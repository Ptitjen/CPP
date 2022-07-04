#include <iostream>
#include <fstream>
#include <string.h>

int main (int argc, char **argv)
{
	if (argc == 4)
	{
	//get infile
		
		std::ifstream	ifs(argv[1]);
		std::string 	buffer;
		
		std::getline(ifs, buffer, '$');
		ifs >> buffer;
		ifs.close();
		
	//replace
		//std::string::size_type n;
		std::string s1 = (argv[2]);
		std::string s2 = (argv[3]);
		//std::string::size_type start = 0;
		std::string::size_type i = 0;
		std::cout << buffer.length();
		std::cout << s1.length();

		//n = buffer.find(argv[2], start);

		// while (start < buffer.length() - s1.length())
	
		// {
		// 	n = buffer.find(s1, start);

		// 	std::cout << n << std::endl;		// 	std::cout << buffer << std::endl;
			
		// 	if (n < buffer.length())
		// 	{
		// 		//TO DO : replace
		// 	}
		// 	start = n + s1.length();
		// }

	//write in outfile - change name of outfile
		std::ofstream	ofs(strcat(argv[1],".replace"));
		ofs << buffer;
		ofs.close();
	}
	return (0);
}