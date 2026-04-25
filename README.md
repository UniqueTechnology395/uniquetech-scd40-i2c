![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg) 
![Platform: Arduino](https://img.shields.io/badge/Platform-Arduino-00979D.svg) 
![Status: Award Winning](https://img.shields.io/badge/Status-Award--Winning-brightgreen.svg)

***

### 🏆 ACSTAC 2026 Innovation Award
> Το σύστημα αυτό αποτελεί μέρος του project που απέσπασε το ***Βραβείο Καινοτομίας*** στο 12ο Μαθητικό Συνέδριο Επιστήμης και Τεχνολογίας του Κολλεγίου Ανατόλια. 🚀

***

## 📝 Περιγραφή
Ο αισθητήρας ***SCD40*** χρησιμοποιείται για τη συνεχή παρακολούθηση των επιπέδων Διοξειδίου του Άνθρακα (CO2) σε σχολικές αίθουσες. Τα δεδομένα τροφοδοτούν ένα μοντέλο ***Explainable AI*** για την πρόβλεψη της ευεξίας και της πνευματικής συγκέντρωσης των μαθητών.

***

### ✨ Key Features
* **Protocol:** `I2C` (Pins A4/SDA, A5/SCL).
* **Sensor:** `Sensirion SCD40` (Photoacoustic Technology).
* **Platform:** `Arduino Uno` / `Uno Q` / `Uno R4`.

***

## 🛠️ Συνδεσμολογία (Wiring)

| Pin Αισθητήρα | Pin Arduino | Περιγραφή |
| :--- | :--- | :--- |
| ***VCC*** | `5V / 3.3V` | Power Supply |
| ***GND*** | `GND` | Ground |
| ***SCL*** | `A5` | I2C Clock |
| ***SDA*** | `A4` | I2C Data |

***

## 💻 Εγκατάσταση

1. **Clone the Repo**
   ```bash
   git clone https://github.com/unique-tech/scd40-co2.git

2. **Libraries**
   
 * ***Εγκατάσταση της βιβλιοθήκης Adafruit SCD4X από τον Library Manager του Arduino IDE.***

3. **Flash**
   
* **Άνοιγμα του αρχείου .ino από το φάκελο /src και Upload στην πλακέτα σας.**

# 📜 Άδεια Χρήσης (License)
**⚙️ Λογισμικό (Software)**
Ο κώδικας αυτού του project διατίθεται υπό την άδεια MIT License.

Προϋπόθεση: Πρέπει να συμπεριλαμβάνεται η αρχική δήλωση πνευματικών δικαιωμάτων της Unique Tech σε κάθε αντίγραφο ή σημαντικό μέρος του λογισμικού.

**📖 Περιεχόμενο & Τεκμηρίωση**
Τα κείμενα, τα ηλεκτρονικά σχέδια και το εκπαιδευτικό υλικό αποτελούν πνευματική ιδιοκτησία της Unique Tech. Η αναπαραγωγή τους επιτρέπεται μόνο με σαφή αναφορά (attribution) στην αρχική πηγή.

# 🔗 Σύνδεσμοι
* **🌐 Website: uniquetech.carrd.co**

* **📝 Blog: Unique Tech Blog**

* **🏗️ Lab: Sparmatseto Robotics**

© 2026 Unique Tech Team | All Rights Reserved
