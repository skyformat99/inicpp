#ifndef INICPP_EXCEPTION_H
#define INICPP_EXCEPTION_H

#include <vector>
#include <iostream>
#include <exception>

namespace inicpp
{
	class exception : public std::exception
	{
	protected:
		std::string what_;
	public:
		exception();
		exception(const std::string &what);
		
		virtual ~exception();

		virtual const char *what() const noexcept;
	};

	class not_implemented_exception : public exception
	{
	public:
		not_implemented_exception();

		virtual const char *what() const noexcept;
	};
}

#endif
