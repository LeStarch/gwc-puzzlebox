//
// Created by starchmd on 8/9/19.
//
#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

/**
 * Output pin mappings, dependent on HW configuration
 */
int TEAM_1 = 14;
int TEAM_2 = 12;
int TEAM_3 = 13;
int TEAMS[] = {TEAM_1, TEAM_2, TEAM_3};

// SSID and server definitions
char* WIFI_SSID = "GWC-IoT";
ESP8266WebServer server(80);

/**
 * Turns on/off team's LEF
 * @param team: team number - 1 (0 based index)
 * @param state: HIGH/LOW
 */
void doLed(int team, int state) {
    digitalWrite(TEAMS[team], state);
    server.send(200, "text/html", "<h1>GWCs LED APP</h1>");
}

void team1on() {
    doLed(0, HIGH);
}
void team1off() {
    doLed(0, LOW);
}
void team2on() {
    doLed(1, HIGH);
}
void team2off() {
    doLed(1, LOW);
}
void team3on() {
    doLed(2, HIGH);
}
void team3off() {
    doLed(2, LOW);
}

/**
 * Arduino required setup function.
 */
void setup() {
    // Setup serial and all pins to be outputs
    Serial.begin(9600);
    for (int i = 0; i < sizeof(TEAMS) / sizeof(TEAM_1); i++) {
        pinMode(TEAMS[i], OUTPUT);
    }
    delay(2000);
    WiFi.softAP(WIFI_SSID);
    Serial.print("Beginning IoT LED Application at: ");
    Serial.println( WiFi.softAPIP());
    // Routes handling
    server.on("/team1/on", team1on);
    server.on("/team1/off", team1off);
    server.on("/team2/on", team2on);
    server.on("/team2/off", team2off);
    server.on("/team3/on", team3on);
    server.on("/team3/off", team3off);
    server.begin();
    Serial.println("HTTP server started");
}

/**
 * Arduino required loop function
 */
void loop() {
    server.handleClient();
}