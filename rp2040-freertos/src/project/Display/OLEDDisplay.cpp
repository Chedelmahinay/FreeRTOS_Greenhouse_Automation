//
// Created by Chedel on 10/3/2025.
//
//  This is really just a stripped down plan for makin a seperate accesible scren selections to be hooked up on the main.
//
//  OLEDDisplay.h & OLEDDisplay.cpp planned 2b finalized this saturday

// all member functions (e.g.void Display_Logic::welcomeScreen())  are not finalized yet.

#include "Display_Logic.h"
#include <utility> // for std::move

Display_Logic::Display_Logic(std::shared_ptr<PicoI2C> i2c)
    : i2c_(std::move(i2c)) {
    width_ = 0;
}

// ------ screens used by Menu ------

// some additionals are subject to change if necessary

void Display_Logic::welcomeScreen() {
    // fill(0); text("Group 6 names,names and names"); show();
}
//
void Display_Logic::mainMenu() {
    // fill(0); text("SET CO2"); text("Show Status"); text("Set NETWORK"); show();
}
// wifi menu choosing which wifi to connect or make a new cred
void Display_Logic::wifiMMenu() {
    // fill(0); text("Connect"); text("New Credentials"); text("Return"); show();
}

//screen select thru different wifi? subject to change prolly
void Display_Logic::selectwifimenu(int /*selection*/) {
    // highlight one of the three rows; show();
}

void Display_Logic::selectmenu(int /*selection*/) {
    // highlight one of the main menu rows; show();
}

void Display_Logic::displayMQTTandWifiMenu(int /*number*/) {
    // show "MQTT" and "WiFi" toggled; show();
}

// this for the SHOW STATUS in the main menu yeap4x
void Display_Logic::displayStatus(int /*co2*/, int /*temp*/, int /*hum*/, int /*fan*/, int /*co2sp*/, const uint8_t* /*wifi_icon*/)
{
    // draw labels/values; optionally blit wifi icon; show();
}

void Display_Logic::credenttialsMenu() { // for the SET NETWORK thingy manu
    // fill(0); text("SSID"); text("Password"); text("Return"); show();
}

void Display_Logic::selctcredenttials(int /*selection*/) {  // imma put the rectangular highlightings here alright3x queue mathew mcconahuey
    // highlight one of the three rows; show();
}

void Display_Logic::connecting() { //thsis shows a screen thats connecting...
    // fill(0); text("Connecting . . ."); show();
}

void Display_Logic::notconnected() { // this shows a screen that it failed connecting
    // fill(0); text("Not connected"); show();
}

void Display_Logic::errorScreen() { // error type shi. like idk maybe for when thers a loose wirin or anythin
    // fill(0); text("Error"); text("Pressure Low"); ...; show();
}
