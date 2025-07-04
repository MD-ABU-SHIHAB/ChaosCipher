# Cryptographic Algorithm Assignment: "ChaosCipher – A Chaos Theory-Based Encryption System" (C++ Implementation)

## 📘 Course Information
- **Course Title:** Mathematical Analysis for Computer Science  
- **Course Code:** CSE 361  
- **Submitted by:**  
  - **Student ID:** 2102051  
  - **Student Name:** Md. Abu Shihab  
  - **Level:** 3  
  - **Semester:** II  
  - **Department:** Computer Science and Engineering  
- **Submitted to:**  
  - **Name:** Pankaj Bhowmik  
  - **Designation:** Lecturer  
  - **Department:** Computer Science and Engineering  
  - **University:** Hajee Mohammad Danesh Science and Technology University

---

## 🔐 Algorithm Name: ChaOSCipher

**ChaOSCipher** is a chaos theory-inspired symmetric encryption algorithm that utilizes **logistic maps** for dynamic key generation and **bitwise permutation** for enhanced confusion and diffusion. It ensures unpredictability and resistance to basic cryptanalytic attacks.

### ✅ Key Features
- ❌ No XOR dependency  
- 🔁 Chaotic key generation using logistic map  
- 🔀 Bitwise permutation and custom S-box substitution  
- 🔄 Non-linear transformation to break frequency patterns

---

## 🧠 Algorithm Design

### ⚙️ Core Components
1. **Logistic Map Function**  
   \[
   x_{n+1} = r \cdot x_n (1 - x_n)
   \]  
   where \( r = 3.99 \), \( x_0 \) is the seed

2. **Bitwise Permutation**  
   Bitwise rearrangement of each byte using chaotic values

3. **S-box Substitution**  
   Non-linear byte substitution based on chaotic sequence

---

## 🔒 Encryption Process
1. Generate chaotic key sequence from seed
2. Permute bits of each plaintext byte
3. Substitute each permuted byte using S-box
4. Output the ciphertext

---

## 🔓 Decryption Process
1. Inverse S-box substitution
2. Reverse bit permutation
3. Reconstruct original plaintext

---

## 🧪 Test Case

- **Plaintext:** `CHAOS`  
- **Key Seed (x₀):** `0.735`  

### ▶️ Output
