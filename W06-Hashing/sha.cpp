/* Name: Paul Talaga
   Date: Feb 16, 2018
   Desc: Demo of using the SHA hash function
   https://www.openssl.org/docs/manmaster/man3/SHA256_Final.html
   
   Compile with: g++ -O3 sha.cpp -Wall -lssl  -lcrypto
*/
#include <openssl/sha.h>

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){

    cout << "Enter your text to SHA256 hash:" << endl;
    string input;
    getline(cin, input);

    unsigned char output[20] = {};  // 160bits is 20 bytes
    SHA256((const unsigned char*)input.c_str(), input.length(), output);
    // SHA1, SHA224, SHA256, SHA384, SHA512
    
    cout << input << " hashed with SHA256 is:" << endl;
    
    for(int i = 0; i < 20; i++){
        printf("%02X", output[i]);
    }
    cout << endl;
}