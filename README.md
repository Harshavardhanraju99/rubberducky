# rubberducky
![Screenshot 2025-04-13 223043](https://github.com/user-attachments/assets/eab0a3f1-8cd4-459e-b815-0a471cb7bc3f)

# LinkedIn Auto-Connect HID Script
This project uses an **Arduino Leonardo or Pro Micro** to act as a **Human Interface Device (HID)**. When triggered (e.g., by a button press), it:

- Launches **Firefox**
- Opens a specific **LinkedIn profile**
- Simulates `TAB` and `ENTER` key presses to:
  - Press the **"Connect"** button
  - Press the **"Follow"** button

> 🚀 Use this to automate self-promotion or networking on LinkedIn in a cool hacker-style way!

---

## 👤 Target Profile

**LinkedIn Profile:**  
[Harsha Vardhan Raju Yerra](https://www.linkedin.com/in/harsha-vardhan-raju-2155a9314/)

---

## 🧰 Requirements

- Arduino **Leonardo**, **Micro**, or **Pro Micro**
- Firefox installed
- LinkedIn user must already be **logged in** on Firefox
- Basic Arduino knowledge and the Arduino IDE

---

## ⚙️ Setup

1. **Upload the Sketch** to your Arduino HID-compatible board.
2. **Connect a button** between pin `2` and `GND`.
3. Press the button to:
   - Open Firefox
   - Navigate to Harsha Vardhan Raju Yerra's LinkedIn profile
   - Simulate "Connect" and "Follow" using keyboard emulation

---

## 🧠 How It Works

- Uses the `Keyboard.h` library to emulate keystrokes.
- Executes a scripted sequence of key presses to open Run (Windows), launch Firefox, and visit the LinkedIn profile.
- Navigates using `TAB` and activates buttons with `ENTER`.

---

## 📝 Notes

- The number of `TAB` presses may need to be adjusted depending on LinkedIn's current layout or login status.
- You must be **already logged into LinkedIn** for this to work as expected.
- Works best when Firefox is **not already open**.

---

## 📷 Demo

*Coming soon — check back for a video demonstration!*

---

## 🤖 Author

**Harsha Vardhan Raju Yerra**  
Founder of [Hidden Hackers](https://hiddenhackers.in)  
Youngest Certified Ethical Hacker | Cybersecurity Researcher  
[LinkedIn](https://www.linkedin.com/in/harsha-vardhan-raju-2155a9314/)

---

## 📜 License

This project is licensed under the MIT License – feel free to modify and share.
# LinkedIn Auto-Connect HID Script

This project uses an **Arduino Leonardo or Pro Micro** to act as a **Human Interface Device (HID)**. When triggered (e.g., by a button press), it:

- Launches **Firefox**
- Opens a specific **LinkedIn profile**
- Simulates `TAB` and `ENTER` key presses to:
  - Press the **"Connect"** button
  - Press the **"Follow"** button

> 🚀 Use this to automate self-promotion or networking on LinkedIn in a cool hacker-style way!

---

## 👤 Target Profile

**LinkedIn Profile:**  
[Harsha Vardhan Raju Yerra](https://www.linkedin.com/in/harsha-vardhan-raju-2155a9314/)

---

## 🧰 Requirements

- Arduino **Leonardo**, **Micro**, or **Pro Micro**
- Firefox installed
- LinkedIn user must already be **logged in** on Firefox
- Basic Arduino knowledge and the Arduino IDE

---

## ⚙️ Setup

1. **Upload the Sketch** to your Arduino HID-compatible board.
2. **Connect a button** between pin `2` and `GND`.
3. Press the button to:
   - Open Firefox
   - Navigate to Harsha Vardhan Raju Yerra's LinkedIn profile
   - Simulate "Connect" and "Follow" using keyboard emulation

---

## 🧠 How It Works

- Uses the `Keyboard.h` library to emulate keystrokes.
- Executes a scripted sequence of key presses to open Run (Windows), launch Firefox, and visit the LinkedIn profile.
- Navigates using `TAB` and activates buttons with `ENTER`.

---

## 📝 Notes

- The number of `TAB` presses may need to be adjusted depending on LinkedIn's current layout or login status.
- You must be **already logged into LinkedIn** for this to work as expected.
- Works best when Firefox is **not already open**.

---

## 📷 Demo

*Coming soon — check back for a video demonstration!*

---

## 🤖 Author

**Harsha Vardhan Raju Yerra**  
Founder of [Hidden Hackers](https://hiddenhackers.in)  
Youngest Certified Ethical Hacker | Cybersecurity Researcher  
[LinkedIn](https://www.linkedin.com/in/harsha-vardhan-raju-2155a9314/)

---

## 📜 License

This project is licensed under the MIT License – feel free to modify and share.
