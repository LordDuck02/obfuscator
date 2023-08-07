#include <iostream>
#include <string>

std::string obfuscateString(const std::string& input, char key) {
    std::string obfuscated;
    for (char c : input) {
        obfuscated.push_back(c ^ key);
    }
    return obfuscated;
}

int main() {
    std::string secretString = "do not come back!";
    char encryptionKey = 'X';

    std::string obfuscatedString = obfuscateString(secretString, encryptionKey);

    std::cout << "Original: " << secretString << std::endl;
    std::cout << "Obfuscated: " << obfuscatedString << std::endl;


    return 0;
}
