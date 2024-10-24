#include <boost/regex.hpp>
#include <string>

int main() {
   boost::regex rx("(*ACCEPT)*+\\1((*ACCEPT)*+\\K)");
   std::string str = "Z";
   boost::smatch what;
   boost::regex_search(str, what, rx, boost::match_default|boost::match_partial);
}
