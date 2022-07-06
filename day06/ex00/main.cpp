#include <iostream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
#include <climits>
#include <float.h>
#include <math.h>

static void ft_inf_nan(std::string str)
{
	if (str == "inff" || str == "+inff" || str == "-inff" || \
	str == "nanf" || str == "+nanf" || str == "-nanf")
		str = str.substr(0, str.length() - 1);
	std::cout << "char : Impossible" << std::endl;
	std::cout << "int : Impossible" << std::endl;
	std::cout << "float : "  << str << "f" << std::endl;
	std::cout << "double : " << str << std::endl;
	exit(0);
}

static void ft_print(char c, int t, float f, double d)
{
	//char
	if (t < 0 || t > 255)
		std::cout << "char : Overflow" << std::endl;
	else if (isprint(c))
		std::cout << "char : '" << c << "' \n";
	else
		std::cout << "char : Non displayable" << std::endl;

	//int
	if (t < INT_MIN || t > INT_MAX)
		std::cout << "int : Overflow" << std::endl;
	else
		std::cout << "int : " << t << std::endl;

	//float
	if ((f < FLT_MIN || f > FLT_MAX) && t != 0)
		std::cout << "float : Overflow" << std::endl;
	else
		std::cout << "float : " << std::setprecision(1) << std::fixed << f <<
		"f" << std::endl;

	//double
	if ((d < DBL_MIN || d > DBL_MAX) && t != 0)
		std::cout << "double : Overflow" << std::endl;
	else
		std::cout << "double : " << std::setprecision(1) << std::fixed << d
		<< std::endl;

	exit(0);
}

static void ft_impossible()
{
	std::cout << "char : Impossible" << std::endl;
	std::cout << "int : Impossible" << std::endl;
	std::cout << "float : Impossible" << std::endl;
	std::cout << "double : Impossible" << std::endl;
	exit(0);
}

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: wrong number of arguments!" << std::endl;
		return (1);
	}
	std::string s = argv[1];

	for (size_t i = 0; i < s.length(); i++)
		s[i] = std::tolower(s[i]);

	char c;
	double d = 0.0;
	int t;
	float f;
	int flag = 0;
	int i = 0;
	int dot = 0;
	int f_letter = 0;

	d = std::atof(s.c_str());

	if (isinf(d) || isnan(d))
		ft_inf_nan(s);
	if (s.length() == 1)
	{
		c = s[0];
		if (c >= '0' && c <= '9')
		{
			std::istringstream(s) >> d;
			t = static_cast<int>(d);
			f = static_cast<float>(d);
			c = static_cast<char>(d);
		}
		else
		{
			d = static_cast<double>(c);
			t = static_cast<int>(d);
			f = static_cast<float>(d);
		}
		ft_print(c, t, f, d);
	}
	while(s[i] && flag == 0)
	{
		if((s[i] < '0' || s[i] > '9') && s[i] != '.' && s[i] != 'f' && s[i] !=
		'-' && s[i] != '+')
			flag = 1;
		else if (s[i] == '.')
			dot++;
		else if (s[i] == 'f')
			f_letter++;
		i++;
	}
	if (dot > 1 || f_letter > 1 || (f_letter == 1 && s[s.length() - 1] !=
	'f') || flag == 1)
		ft_impossible();
	else
	{
		if (f_letter == 1)
			s = s.substr(0, s.length() - 1);
		std::istringstream(s) >> d;
		t = static_cast<int>(d);
		f = static_cast<float>(d);
		c = static_cast<char>(d);
		ft_print(c, t, f, d);
	}
	return (0);
}