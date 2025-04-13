#include <Keyboard.h>

#define BUTTON_PIN 2
#define WINDOWS 1
#define OSX 0

int platform = WINDOWS;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  delay(2000);
  Keyboard.begin();
}

void loop() {
  if (digitalRead(BUTTON_PIN) == LOW) {
    delay(200);

    // Step 1: Open Run / Spotlight
    switch (platform) {
      case OSX:
        Keyboard.press(KEY_LEFT_GUI);
        Keyboard.press(' ');
        Keyboard.releaseAll();
        break;
      case WINDOWS:
        Keyboard.press(KEY_LEFT_GUI);
        Keyboard.press('r');
        Keyboard.releaseAll();
        break;
    }

    delay(800);

    // Step 2: Launch Firefox
    Keyboard.print("firefox");
    typeKey(KEY_RETURN);
    delay(4000); // Wait for browser to open

    // Step 3: Open LinkedIn profile
    Keyboard.print("https://www.linkedin.com/in/harsha-vardhan-raju-2155a9314/");
    typeKey(KEY_RETURN);
    delay(7000); // Wait for LinkedIn to load

    // Step 4: Simulate navigation to "Connect" and "Follow" buttons
    // (Adjust number of tabs depending on login/account state)
    typeKey(KEY_TAB); delay(300);  // Profile picture
    typeKey(KEY_TAB); delay(300);  // Name
    typeKey(KEY_TAB); delay(300);  // Open to
    typeKey(KEY_TAB); delay(300);  // Connect
    typeKey(KEY_RETURN);           // Press Connect (if focused)
    delay(1000);

    typeKey(KEY_TAB); delay(300);  // Focus "Follow"
    typeKey(KEY_RETURN);           // Press Follow

    while (true); // Stop loop
  }
}

void typeKey(int key) {
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}
