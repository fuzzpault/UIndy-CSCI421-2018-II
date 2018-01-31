/*                                                                                                                     
  Name: Paul Talaga
  Date: Jan 27, 2018
  Desc: Demonstrates how you can change cin to accept ALL text until a
        EOF (ctrl-d) is entered.
*/
#include <iostream>
#include <istream>
#include <ostream>
#include <iterator>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
    
    //cout << argv[16] << endl;  Don't do this!
    
    // don't skip the whitespace while reading
    cin >> std::noskipws;
    
    // use stream iterators to copy the stream to a string
    istream_iterator<char> it(cin);
    istream_iterator<char> end;
    string input(it, end);
    
    cout << "You entered: " << input << endl;
    cout << "It has length: " << input.size() << endl;
    
    return 0;
}