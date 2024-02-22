# RFID-based Question and Answer System

## Overview

This project implements an RFID-based Question and Answer system using Arduino and C++. The system incorporates an RFID module and a 16x4 LCD screen. It engages users in a quiz format, reading RFID cards to provide answers.

## How it Works

The project functions as follows:

1. Users tap RFID/NFC tags to initiate the quiz.
2. Questions are displayed on the LCD screen.
3. RFID cards corresponding to answer options (A, B, C) are used to submit answers.
4. The system recognizes the RFID card, evaluates the answer, and proceeds to the next question.
5. The final score is displayed at the end of the quiz.

## Setup

### Hardware Requirements

- Arduino board
- MFRC522 RFID module
- 16x4 LCD screen
- RFID cards

### Code Overview

The Arduino code includes the following key components:

- Initialization of RFID and LCD modules.
- Displaying introductory information on the LCD.
- Reading RFID cards and mapping them to answer options.
- Presenting quiz questions on the LCD.
- Evaluating user answers and updating the score.
- Displaying the final score and a thank-you message.

## How to Use

1. Connect the RFID module and LCD screen to the Arduino following the provided pin configurations.
2. Upload the provided `.ino` file to the Arduino board using the Arduino IDE.
3. Ensure the RFID cards are properly configured and correspond to answer options.
4. Power on the Arduino, and the system is ready for use.

## Contributions

Contributions and improvements to the code are welcome. Feel free to fork the repository, make changes, and submit a pull request.

