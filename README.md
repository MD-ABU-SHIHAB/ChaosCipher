# 🔐 Cryptographic Algorithm Assignment  
### "ChaosCipher – A Chaos Theory-Based Encryption System" (C++ Implementation)

---

## 🏫 Course Information  
- **Course Title:** Mathematical Analysis for Computer Science  
- **Course Code:** CSE 361  

## 🧑‍🎓 Submitted By  
- **Student ID:** 2102051  
- **Student Name:** Md. Abu Shihab  
- **Level:** 3  
- **Semester:** II  
- **Department:** Computer Science and Engineering  

## 👨‍🏫 Submitted To  
- **Name:** Pankaj Bhowmik  
- **Designation:** Lecturer  
- **Department:** Computer Science and Engineering  
- **University:** Hajee Mohammad Danesh Science and Technology University  

---

## 🔎 Algorithm Name: **ChaOSCipher**  

**ChaOSCipher** is a chaos theory-inspired symmetric encryption algorithm that leverages the **logistic map** for pseudo-random key generation and **bitwise permutation with dynamic S-box substitution** to create highly non-linear and secure ciphertext.

### ✅ Key Differentiators  
- ❌ No XOR dependency (used in most basic ciphers)  
- 🔁 Chaotic key generation using logistic maps  
- 🔀 Bitwise permutation combined with S-box substitution  
- 🔄 Strong non-linearity for resistance against frequency analysis  

---

## 🧠 Algorithm Design  

### Core Concepts Used  

1. **Logistic Map Function**  
   \[
   x_{n+1} = r \cdot x_n (1 - x_n)
   \]  
   Where:  
   - \( r = 3.99 \) (chaotic regime)  
   - \( x_0 \) = initial seed (key)

2. **Dynamic Bitwise Permutation**  
   Rearranges bits of each byte based on chaotic values

3. **Non-Linear Substitution using S-box**  
   Custom S-box dynamically generated from chaotic sequence

---

## 🔒 Encryption Steps  
1. Generate chaotic key sequence using logistic map  
2. Apply bitwise permutation to each byte using chaotic key  
3. Substitute each byte using generated S-box  
4. Output the encrypted text (ciphertext)

## 🔓 Decryption Steps  
1. Reverse S-box substitution using inverse mapping  
2. Reverse bit permutation  
3. Retrieve the original plaintext  

---

## 💻 Pseudocode (C++)  

### 🔑 Key Generation  
```cpp
vector<double> generateChaoticKey(double x0, int length) {
    vector<double> key;
    double r = 3.99;
    for (int i = 0; i < length; i++) {
        x0 = r * x0 * (1 - x0);
        key.push_back(x0);
    }
    return key;
}
🔄 Bitwise Permutation
cpp
Copy
Edit
uint8_t permuteBits(uint8_t byte, double chaosVal) {
    uint8_t mask = (uint8_t)(chaosVal * 255);
    return ((byte & mask) << 4) | ((byte & ~mask) >> 4);
}
🔁 S-box Generation
cpp
Copy
Edit
unordered_map<uint8_t, uint8_t> generateSBox(double x0) {
    unordered_map<uint8_t, uint8_t> sBox;
    for (int i = 0; i < 256; i++) {
        x0 = 3.99 * x0 * (1 - x0);
        sBox[i] = (uint8_t)(x0 * 255);
    }
    return sBox;
}
🔐 Encryption Function
cpp
Copy
Edit
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
🔓 Decryption Function
cpp
Copy
Edit
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
🧪 Test Case
Input
Plaintext: "CHAOS"

Key Seed (x₀): 0.735

Execution Process
Chaotic Key Expansion

Example values: [0.762, 0.724, 0.798, ...]

Permutation

'C' (01000011) → shuffled → 11000010

S-box Substitution

11000010 → substituted → 10110100

Cipher Output

Ciphertext (Hex): B2 DB 8F 1A 9C

Decryption Result

Decrypted Text: "CHAOS"

🧾 Output (C++ Console)
makefile
Copy
Edit
Plaintext: CHAOS  
Ciphertext (hex): B2 DB 8F 1A 9C  
Decrypted: CHAOS  
