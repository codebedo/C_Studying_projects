#include <boost/algorithm/string.hpp>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

using namespace boost::algorithm;

int main()
{
    string s = "geeks_for_geeks";
    cout 
        << replace_first_copy(s, "_", "-")
        << '\n' ;
    cout
        << replace_first_copy(s, "_","-")
        << '\n';
    cout
        << replace_all_copy(s, "_","-")
        << '\n';
    
    return 0;    
    
}
