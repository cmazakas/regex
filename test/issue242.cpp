#include <boost/regex.hpp>

#include <iostream>
#include <sstream>
#include <string>
#include <iterator>
#include <fstream>
#include <filesystem>

int main()
{
   char const strdata[] = "\x00t\x03.z%(?x:]*+\x0c#\\x0c\x0c\x0c+\x0c#\\x0c\x0c\x0c\x11\x0c\x0c\xff\xff\xfd*\xff\xff\xff\xff\xff\xff\xff\xff|\xff\xff\xfd*\xff\xff)*\x01\x03\x00\x00\x00\x03\xff\xff\xff\x00\x00\xff\xff\xff";
   
   std::string str(strdata, strdata + sizeof(strdata) - 1);
   boost::regex e(str);
   std::string text = "hello, world!";

   boost::match_results<std::string::const_iterator> what;
   bool match = boost::regex_match(text, what, e,
                      boost::match_default | boost::match_partial);
   (void)match;
}
