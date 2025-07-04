# ChaosCipher - A Chaos Theory-Based Encryption System
![C++](https://img.shields.io/badge/C++-17-blue.svg)
![License](https://img.shields.io/badge/License-Academic-blue.svg)

## 📚 Course Information
| Category          | Details                          |
|-------------------|----------------------------------|
| Course Title      | Mathematical Analysis for Computer Science |
| Course Code       | CSE 361                          |
| University        | Hajee Mohammad Danesh Science and Technology University |
| Department        | Computer Science and Engineering |

### 👨‍🎓 Student Information
- **Name:** Md. Abu Shihab
- **ID:** 2102051
- **Level:** 3
- **Semester:** II

### 👨‍🏫 Submitted To
- **Name:** Pankaj Bhowmik
- **Designation:** Lecturer
- **Department:** Computer Science and Engineering

---

## 🔐 Algorithm Overview
**ChaOSCipher** is an innovative symmetric encryption algorithm that leverages chaos theory principles to provide secure data encryption. Unlike traditional XOR-based ciphers, it uses:

- 🌀 Logistic map chaos for dynamic key generation
- 🔀 Bitwise permutation for confusion
- 🧩 Custom S-box substitution for diffusion
- 🔄 Non-linear transformations

### ✅ Key Features
| Feature | Description |
|---------|-------------|
| No XOR Dependency | Avoids common cryptographic patterns |
| Chaotic Key Generation | Unpredictable key sequence generation |
| Bitwise Operations | Enhanced security through bit manipulation |
| Non-Linear Transformation | Resists frequency analysis attacks |

---

## 📊 Flowcharts

### Encryption Process
![Encryption Flowchart](encryption_flow.png)

### Decryption Process
![Decryption Flowchart](decryption_flow.png)

---

## 🛠 Implementation Details

### Core Components
1. **Logistic Map Function**
   ```math
   x_{n+1} = 3.99 \cdot x_n (1 - x_n)
