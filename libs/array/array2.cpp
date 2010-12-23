/* example for using class array<>
 */
#include <algorithm>
#include <functional>
#include <boost/array.hpp>
#include "print.hpp"
using namespace std;
using namespace boost;

int main()
{
    // create and initialize array
    array<int,10> a = { { 1, 2, 3, 4, 5 } };

    print_elements(a);

    // modify elements directly
    for (unsigned i=0; i<a.size(); ++i) {
        ++a[i];
    }
    print_elements(a);

    // change order using an STL algorithm
    reverse(a.begin(),a.end());
    print_elements(a);

    // negate elements using STL framework
    transform(a.begin(),a.end(),    // source
              a.begin(),            // destination
              negate<int>());       // operation
    print_elements(a);

    return 0;  // makes Visual-C++ compiler happy
}
