// chaoscipher.cpp
#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>

using namespace std;

vector<double> generateChaoticKey(double x0, int length) {
    vector<double> key;
    double r = 3.99;
    for (int i = 0; i < length; i++) {
        x0 = r * x0 * (1 - x0);
        key.push_back(x0);
    }
    return key;
}

uint8_t permuteBits(uint8_t byte, double chaosVal) {
    uint8_t mask = (uint8_t)(chaosVal * 255);
    return ((byte & mask) << 4) | ((byte & ~mask) >> 4);
}

unordered_map<uint8_t, uint8_t> generateSBox(double x0) {
    unordered_map<uint8_t, uint8_t> sBox;
    for (int i = 0; i < 256; i++) {
        x0 = 3.99 * x0 * (1 - x0);
        sBox[i] = (uint8_t)(x0 * 255);
    }
    return sBox;
}

string encrypt(string plaintext, double key) {
    auto chaoticKey = generateChaoticKey(key, plaintext.length());
    auto sBox = generateSBox(key);
    string ciphertext;
    for (int i = 0; i < plaintext.length(); i++) {
        uint8_t byte = plaintext[i];
        byte = permuteBits(byte, chaoticKey[i]);
        byte = sBox[byte];
        ciphertext += byte;
    }
    return ciphertext;
}

string decrypt(string ciphertext, double key) {
    auto chaoticKey = generateChaoticKey(key, ciphertext.length());
    auto sBox = generateSBox(key);
    unordered_map<uint8_t, uint8_t> invSBox;
    for (auto &[k, v] : sBox) invSBox[v] = k;
    string plaintext;
    for (int i = 0; i < ciphertext.length(); i++) {
        uint8_t byte = ciphertext[i];
        byte = invSBox[byte];
        byte = permuteBits(byte, chaoticKey[i]);
        plaintext += byte;
    }
    return plaintext;
}

int main() {
    string plaintext = "CHAOS";
    double key = 0.735;

    string ciphertext = encrypt(plaintext, key);
    string decrypted = decrypt(ciphertext, key);

    cout << "Plaintext: " << plaintext << endl;
    cout << "Ciphertext (hex): ";
    for (char c : ciphertext) printf("%02X ", (uint8_t)c);
    cout << "\nDecrypted: " << decrypted << endl;

    return 0;
}
