/* Name: Paul Talaga
   Date: Feb 16, 2018
   Desc: Demo of using the MD5 hash function
   https://www.openssl.org/docs/manmaster/man3/MD5_Update.html
   
   Compile with: g++ -O3 md5.cpp -Wall -lssl  -lcrypto
*/
#include <openssl/md5.h>

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){

    cout << "Enter your text to MD5 hash:" << endl;
    string input;
    getline(cin, input);

    unsigned char output[16] = {};  // 128bits is 16 bytes
    // MD5 outputs a 128bit message digest, which is 16 bytes long
    MD5((const unsigned char*)input.c_str(), input.length(), output);
    
    cout << input << " hashed with MD5 is:" << endl;
    
    for(int i = 0; i < 16; i++){
        printf("%02X", output[i]);
    }
    cout << endl;
}