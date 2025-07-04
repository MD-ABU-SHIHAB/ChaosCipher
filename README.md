🏫 **HAJEE MOHAMMAD DANESH SCIENCE AND TECHNOLOGY UNIVERSITY, DINAJPUR-5200**

---

📖 **Course Information**  
**Course Title:** Mathematical Analysis for Computer Science  
**Course Code:** CSE 361  

🧑‍🎓 **Submitted By:**  
**Student ID:** 2102051  
**Student Name:** Md. Abu Shihab  
**Level:** 3  
**Semester:** II  
**Department:** Computer Science and Engineering  

👨‍🏫 **Submitted To:**  
**Name:** Pankaj Bhowmik  
**Designation:** Lecturer  
**Department:** Computer Science and Engineering  
**University:** Hajee Mohammad Danesh Science and Technology University  

---

## 🔐 Proposed Cryptographic Algorithm

### **Algorithm Name:** ChaOSCipher  
A Chaos Theory-based Cipher using "Logistic Map", Bit Permutation, and S-Box Substitution

---

## 🧩 Introduction

**ChaOSCipher** is a symmetric cryptographic algorithm inspired by **chaos theory**, primarily utilizing the **logistic map** for dynamic key generation, followed by **bitwise permutation** and **S-box substitution** to achieve high randomness and security. This makes frequency analysis and brute-force attacks difficult due to unpredictable key schedules and non-linear transformations.

---

## 🧠 Encryption Algorithm

### ✨ Core Concepts
1. **Logistic Map Function**  
   \[
   x_{n+1} = r \cdot x_n (1 - x_n)
   \]  
   - \( r = 3.99 \) ensures chaos behavior  
   - \( x_0 \) is used as the key seed  
   - Output used to derive keys and permutations

2. **Bitwise Permutation**  
   - Each byte's bits are reordered using chaotic key values.

3. **S-box Substitution**  
   - A dynamically generated lookup table for non-linear substitution.

---

### 🔒 **Encryption Steps**
1. Generate a chaotic key sequence using logistic map with initial key seed \( x_0 \)
2. For each character in plaintext:
   - Apply bitwise permutation using corresponding chaotic key
   - Replace permuted byte with value from S-box
3. Output encrypted ciphertext

---

### 🔓 **Decryption Steps**
1. Generate same chaotic key sequence using logistic map
2. Generate inverse S-box from original S-box
3. For each character in ciphertext:
   - Reverse substitution using inverse S-box
   - Apply inverse bitwise permutation
4. Output decrypted plaintext

---

## 🧪 Example Test Case

### ✅ Input:
- Plaintext: `CHAOS`  
- Key Seed (x₀): `0.735`  

### ▶️ Output:
