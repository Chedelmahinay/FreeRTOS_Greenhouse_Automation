//
// Created by Chedel on 10/3/2025.
//
//  This is really just a stripped down plan for makin a seperate accesible scren selections to be hooked up on the main.
//
//  OLEDDisplay.h & OLEDDisplay.cpp planned 2b finalized this saturday

// all member functions (e.g.void Display_Logic::welcomeScreen())  are not finalized yet.

// what i thought was to make a seperate .cpp and .h files for the screen-pixel and logic of the UI Display . open to changes if necessary

#ifndef OLEDDISPLAY_H
#define OLEDDISPLAY_H

#include <memory>
#include <string>
#include <cstdint>
#include "OLEDDisplay.h"
#include "OLEDDisplay.cpp"


class PicoI2C; // forward-declare to avoid pulling hardware headers

// Minimal, logic-free display facade you can flesh out later.
class Display_Logic {
public:
    explicit Display_Logic(std::shared_ptr<PicoI2C> i2c);

    // High-level screens used by Menu
    void welcomeScreen();
    void mainMenu();
//

    void displayStatus(int co2, int temp, int hum, int fan, int co2sp, const uint8_t* wifi_icon);

//
    void credenttialsMenu();
    void selctcredenttials(int);
    void connecting();
    void notconnected();
    void errorScreen();

    // Lightweight helpers used elsewhere in your project
    void displayText(const char* string, const uint8_t* /*font*/ = nullptr);
    void displayMenu(const char* textA, const char* textB);
    void displayControlPressureLevel(uint16_t pressure);
    void displayControlSpeed(uint16_t speed);

private:
    // No hardware members here in the template; add when you implement
    std::shared_ptr<PicoI2C> i2c_;
    int width_{0};

    // (Optional) low-level drawing primitives — left as no-ops for now.
    void fill(uint8_t /*color*/) {}
    void text(const char* /*s*/, int /*x*/, int /*y*/) {}
    void rect(int /*x*/, int /*y*/, int /*w*/, int /*h*/, int /*color*/, bool /*filled*/ = false) {}
    void line(int /*x0*/, int /*y0*/, int /*x1*/, int /*y1*/, int /*color*/) {}
    void show() {}
};

#endif
