// display.h
#ifndef DISPLAY_H
#define DISPLAY_H

#include "globals.h"

void initDisplay(int i = 0); // Início da função e mostra bootscreen

//Funções para economizar linhas nas outras funções
void resetTftDisplay(int x = 0, int y = 0, uint16_t fc = FGCOLOR, int size = FM, uint16_t bg = BGCOLOR, uint16_t screen = BGCOLOR);
void setTftDisplay(int x = 0, int y = 0, uint16_t fc = tft.textcolor, int size = tft.textsize, uint16_t bg = tft.textbgcolor);

void resetSpriteDisplay(int x = 0, int y = 0, uint16_t fc = FGCOLOR, int size = FM, uint16_t bg = BGCOLOR, uint16_t screen = BGCOLOR);
void setSpriteDisplay(int x = 0, int y = 0, uint16_t fc = sprite.textcolor, int size = sprite.textsize, uint16_t bg = sprite.textbgcolor);

void displayRedStripe(String text, uint16_t fgcolor = TFT_WHITE, uint16_t bgcolor = TFT_RED);

void displayError(String txt);  // Faixa vermelha
void displayWarning(String txt);// Faixa amarela
void displayInfo(String txt);   // Faixa Azul
void displaySuccess(String txt);// Faixa Verde

void loopOptions(const std::vector<std::pair<std::string, std::function<void()>>>& options, bool bright = false, bool submenu = false, String subText = "");

void drawOptions(int index,const std::vector<std::pair<std::string, std::function<void()>>>& options, uint16_t fgcolor, uint16_t bgcolor);

void drawSubmenu(int index,const std::vector<std::pair<std::string, std::function<void()>>>& options, String system);

void drawMainMenu(int index = 0);

void listFiles(int index, String fileList[][3]);

void displayScanning();

void drawWireguardStatus(int x, int y);

void progressHandler(int progress, size_t total);

int getBattery();

void drawBatteryStatus();

void drawWifiSmall(int x, int y);

void drawWifi();

void drawBLESmall(int x, int y);

void drawBLE();

void drawRf();

void drawRfid();

void drawOther();

void drawCfg();





#define bits_width 237
#define bits_height 133
PROGMEM const unsigned char bits[] = {
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xDF, 0xFE, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xF9, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xDF, 0xEF, 0xFF, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFB, 0xF7, 0xF7, 0xF7, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 
  0xFE, 0xFF, 0x07, 0xC8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x7F, 0x3D, 0x00, 0x00, 0xE8, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x87, 
  0xFB, 0xFB, 0x32, 0xB7, 0x01, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0xBE, 0xDF, 0xDD, 0x49, 0x75, 0xA0, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x87, 
  0xEF, 0x55, 0x6A, 0x6A, 0xAD, 0x06, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x47, 0xB5, 0xAE, 0xDD, 0x9D, 0x56, 0xBB, 
  0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE3, 
  0xD6, 0xAB, 0x65, 0x65, 0xD9, 0xA6, 0x16, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xA3, 0x28, 0xD4, 0xAA, 0xDA, 0xA5, 0x55, 
  0x6B, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x21, 
  0x94, 0x55, 0xAD, 0x46, 0x9E, 0xEB, 0x9A, 0xC7, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0x5F, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x62, 0xA6, 0x76, 0xFB, 0xF9, 0xBE, 
  0x77, 0x15, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0x2F, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
  0xD0, 0x3B, 0x99, 0xBA, 0x57, 0xDB, 0xAA, 0x7F, 0xFE, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xDF, 0xE3, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x14, 0xAD, 0xD6, 0x6A, 0xD7, 0xFD, 0xBA, 
  0xFF, 0x9A, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0x9F, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xB1, 
  0x6A, 0x59, 0xBD, 0xD6, 0x75, 0x5D, 0x7F, 0xDF, 0xE7, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0x3F, 0x65, 0xFC, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x40, 0xB5, 0xB6, 0xDB, 0xBF, 0xEF, 0xFB, 
  0xDD, 0x3A, 0xC6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xAE, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0xC0, 
  0x6D, 0xDF, 0xFF, 0xE7, 0x7D, 0xFF, 0xD7, 0xA7, 0xBF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFD, 0x9B, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0x21, 0x62, 0x6A, 0xB6, 0xEA, 0xFE, 0xFF, 0xDF, 
  0x7D, 0xEE, 0x29, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xBB, 0x3F, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x40, 0x90, 
  0xEB, 0xFF, 0xFB, 0xBE, 0xFF, 0xEE, 0xED, 0x5B, 0x76, 0xFC, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xF7, 0xE4, 0xF9, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x3F, 0x02, 0x6E, 0xBD, 0xA5, 0x9D, 0xF7, 0x56, 0xBF, 
  0xFF, 0xFF, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFA, 
  0xAB, 0x7E, 0xFF, 0xBF, 0xD7, 0xF6, 0xF7, 0x5F, 0xDF, 0xF3, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xEF, 0xD7, 0x8F, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x87, 0xC4, 0x75, 0xFD, 0xE7, 0x95, 0xD5, 0x7E, 0xEF, 
  0xBF, 0xFB, 0xFF, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xBB, 0x3F, 0xFE, 0xFF, 0xFF, 0xFF, 0x07, 0xD4, 0xDC, 
  0xAE, 0x9F, 0x55, 0x6F, 0xFF, 0xFD, 0xEE, 0xDF, 0xBF, 0xC7, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xDF, 0xFF, 0xFD, 0xF1, 
  0xFF, 0xFF, 0xFF, 0x01, 0x68, 0xE7, 0xF7, 0xFA, 0xFF, 0xF9, 0xE6, 0xA7, 
  0x75, 0xFE, 0xFD, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xBF, 0x9F, 0xFF, 0xE7, 0xFF, 0xFF, 0xFF, 0x20, 0x68, 0x7E, 
  0xBA, 0xF7, 0xFD, 0xFF, 0x5F, 0x5A, 0xED, 0xFB, 0xF7, 0x97, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xBB, 0xE5, 0x0F, 
  0xFF, 0xFF, 0x7F, 0x00, 0xDA, 0xE7, 0xDF, 0x9D, 0x9B, 0xDD, 0xF5, 0xAE, 
  0xB6, 0xBF, 0xDF, 0x5F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0x7F, 0xFB, 0x6D, 0x3D, 0xFE, 0xFF, 0x3F, 0x80, 0xBB, 0xBB, 
  0xEF, 0xDF, 0xF7, 0x7B, 0xFE, 0x5D, 0x75, 0x7F, 0xFB, 0x1F, 0xFE, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0x7E, 0xFF, 0xFF, 
  0xFC, 0xFF, 0x1F, 0x54, 0xD6, 0xDD, 0x5D, 0x7B, 0xAE, 0xEF, 0x3F, 0xFB, 
  0xFF, 0xFE, 0x7F, 0x7B, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0x7F, 0xF7, 0xFE, 0xF1, 0xFF, 0x0F, 0xD0, 0xFB, 0xFF, 
  0xCA, 0xFD, 0xFF, 0x7D, 0xFE, 0xDD, 0xFF, 0xFF, 0xDE, 0xB6, 0xFC, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 
  0xC7, 0xFF, 0x07, 0xA6, 0x5E, 0x55, 0xFF, 0x6F, 0xDB, 0xFB, 0xDF, 0x57, 
  0xED, 0xEF, 0xFF, 0x6F, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0x7B, 0xFF, 0x9B, 0xFF, 0x03, 0xD6, 0x55, 0x55, 
  0xF6, 0xB7, 0xF7, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0x7D, 0x6D, 0xF2, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0xDF, 
  0x3F, 0xFE, 0x41, 0x2C, 0xFE, 0xFF, 0x7F, 0xFE, 0x7F, 0xDF, 0x9B, 0xFE, 
  0xB9, 0xDF, 0xFF, 0xFB, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0xFD, 0x29, 0xB7, 0xDF, 0xDD, 
  0xED, 0xFB, 0xDD, 0xAF, 0x5A, 0xD9, 0xFF, 0x7B, 0xFF, 0xFF, 0xE7, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0xB6, 
  0xFF, 0xF5, 0x80, 0xD5, 0xBA, 0xBB, 0xFF, 0xDF, 0xFF, 0x55, 0xA5, 0xFE, 
  0xFF, 0xFE, 0xEF, 0xB7, 0xCD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0xFF, 0xFF, 0x6F, 0x20, 0xD6, 0xBD, 0xF7, 
  0xFF, 0xEE, 0xBB, 0x3D, 0x6C, 0xFF, 0x6F, 0xFE, 0xDD, 0xFF, 0xDB, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 
  0xBE, 0x2B, 0xC0, 0x59, 0xDB, 0xDF, 0x7B, 0xFF, 0xFF, 0xFF, 0xDB, 0xAF, 
  0xFD, 0xEF, 0xFF, 0x67, 0x9D, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7A, 0xFF, 0x1F, 0x68, 0xBF, 0xFF, 0xFF, 
  0xEF, 0xBB, 0xFF, 0xFF, 0xA7, 0xFF, 0xFD, 0x7F, 0xFD, 0xDF, 0x37, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF, 
  0x77, 0x1E, 0xDC, 0xE4, 0x7C, 0x7D, 0xFE, 0xFF, 0xDE, 0xFB, 0xEF, 0xFB, 
  0xEF, 0xFB, 0x7F, 0xFF, 0xBA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0xFF, 0x0F, 0xB6, 0x5D, 0xFF, 0xEE, 
  0xBF, 0xFF, 0x7E, 0xFB, 0xF3, 0xFF, 0x7F, 0xEF, 0xFF, 0xBF, 0x7B, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 
  0xFB, 0x47, 0x66, 0xF9, 0x5B, 0xFF, 0xFF, 0xE7, 0xFF, 0xFF, 0xFF, 0xED, 
  0xF7, 0xF7, 0xEF, 0x6E, 0x6D, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBE, 0xDF, 0x85, 0x7B, 0xFB, 0xF5, 0xBF, 
  0xB7, 0xFF, 0xFF, 0xBE, 0xB9, 0xFF, 0xDE, 0xBE, 0xFD, 0xFF, 0xD3, 0xFE, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFB, 0x83, 0xC6, 0x5E, 0xDE, 0xFB, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xAB, 
  0x7F, 0xFF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x63, 0xDD, 0x9F, 0xF5, 0xFE, 
  0xFF, 0xBE, 0xDB, 0xFF, 0xFE, 0xF7, 0xFB, 0xFB, 0x7E, 0xDF, 0xFF, 0xFE, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDB, 
  0xFE, 0x81, 0xA3, 0xE3, 0xEF, 0xDF, 0xFA, 0xFF, 0xFF, 0x6B, 0xFF, 0xE9, 
  0xFF, 0xFF, 0xFF, 0xF7, 0xB6, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF1, 0xFE, 0x71, 0x7F, 0xFB, 
  0xBF, 0xEF, 0x7E, 0xBF, 0xEE, 0xE7, 0xDF, 0xBF, 0xFF, 0xFF, 0xFF, 0xFD, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xD7, 
  0xEF, 0xA0, 0x69, 0xE8, 0xDE, 0xFF, 0xFF, 0xF7, 0xFF, 0xCF, 0xFF, 0xBB, 
  0xFD, 0xFD, 0xF7, 0xFB, 0xED, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x6C, 0x1B, 0xF6, 0xEB, 0xFB, 
  0xFF, 0xFF, 0xFF, 0xDB, 0xFF, 0xFB, 0xFB, 0xEF, 0xF7, 0xDF, 0xDB, 0xF9, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x7F, 0xA4, 0x8A, 0x7E, 0xFF, 0x7F, 0xEF, 0xFF, 0x7F, 0xF5, 0xFF, 0xE7, 
  0xFF, 0xF7, 0x7F, 0xFF, 0xFB, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0xB4, 0xA3, 0xE7, 0x77, 0xFE, 
  0x9E, 0x75, 0x7B, 0xF8, 0xEF, 0xEB, 0xAF, 0xFF, 0xFF, 0xDF, 0xFB, 0xFB, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 
  0x1D, 0x6B, 0xD1, 0xFF, 0xFD, 0xBF, 0xEF, 0x5F, 0x3F, 0xFF, 0xFF, 0xF7, 
  0xFF, 0xFD, 0xDE, 0xFB, 0xFF, 0xFB, 0xFF, 0xFF, 0xFF, 0xF7, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xE2, 0xB8, 0x7B, 0xFB, 0xFF, 
  0xE4, 0xFB, 0x9E, 0x7F, 0xFF, 0x7F, 0xFE, 0x7F, 0xFF, 0xFD, 0xFF, 0xFB, 
  0xFF, 0x7F, 0x00, 0x00, 0xF0, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x8D, 0x3F, 0xD6, 0xFF, 0xFF, 0xDF, 0xBB, 0xA6, 0xC9, 0xFF, 0xF3, 0xF7, 
  0xFF, 0xFF, 0xFB, 0xFF, 0xF5, 0xFB, 0xFF, 0x00, 0xB8, 0xFF, 0x8D, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x29, 0xDB, 0xFF, 0xEF, 0x7B, 
  0x9E, 0xDA, 0xC7, 0xFF, 0xB3, 0xFF, 0xDF, 0xFD, 0xDF, 0xFF, 0xF7, 0xFB, 
  0x17, 0xE0, 0xFF, 0xF7, 0x7F, 0x1C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x86, 0x56, 0xFE, 0xD9, 0xFE, 0x9F, 0x65, 0xFF, 0xF1, 0xFF, 0xE3, 0xEB, 
  0xF7, 0xFF, 0xFF, 0xEF, 0xFF, 0x7B, 0x80, 0xBE, 0xCF, 0x9F, 0xCA, 0x1B, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xA5, 0xCD, 0x5A, 0xEF, 0x77, 0x66, 
  0xB5, 0xFF, 0xD6, 0xFF, 0xF7, 0xFE, 0xFF, 0xF7, 0xFF, 0xFF, 0xFF, 0x01, 
  0xBE, 0xF7, 0xFA, 0xF5, 0xFF, 0x1E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x53, 0xB2, 0xFF, 0xFF, 0x7F, 0xBD, 0xAA, 0x7A, 0xFD, 0xFF, 0xBF, 0xBF, 
  0xFF, 0xDF, 0xFF, 0xFF, 0xFB, 0xE2, 0xFF, 0xEF, 0x6F, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x61, 0x9A, 0xFF, 0xFD, 0xDE, 0xA6, 
  0x6B, 0xBE, 0xFE, 0xFE, 0xFF, 0xFD, 0x7E, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xB7, 0xFA, 0xF6, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xB1, 0xE9, 0xFA, 0xDF, 0x6F, 0x5A, 0xB5, 0x67, 0xFF, 0xDF, 0xFF, 0xFB, 
  0xFF, 0x84, 0xFF, 0xD7, 0xFF, 0xFF, 0xDB, 0xBF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x68, 0xAC, 0xB7, 0xFF, 0x9B, 0xDD, 
  0xC9, 0x9F, 0xFF, 0xFF, 0x7F, 0xED, 0x7F, 0x40, 0xFC, 0x5F, 0xFF, 0x37, 
  0xFE, 0xD7, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 
  0xE4, 0xFA, 0xFF, 0x7E, 0x67, 0x66, 0x76, 0x7A, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x2B, 0x00, 0xFC, 0x47, 0xBE, 0xEA, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7E, 0xEF, 0xFD, 0xFF, 0x99, 0x99, 
  0x9D, 0xE9, 0x7F, 0xEF, 0xFF, 0xFF, 0x03, 0x00, 0xFC, 0x48, 0xFE, 0xFE, 
  0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 
  0x18, 0xBA, 0xBF, 0x7B, 0xF6, 0x5A, 0x6B, 0xF5, 0xFF, 0xFF, 0xFF, 0x7F, 
  0x00, 0x00, 0x50, 0x80, 0xFC, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x5F, 0xEF, 0x7B, 0x4F, 0xAD, 0x54, 
  0xD7, 0xFE, 0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x04, 0x10, 0x40, 0xFD, 0xFF, 
  0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xB4, 0xF4, 0xFF, 0xB7, 0xDA, 0x9B, 0x39, 0xFF, 0xFF, 0xFD, 0xFF, 0x17, 
  0x00, 0x00, 0x04, 0xC8, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0xAF, 0x7F, 0xDF, 0xEB, 0x4A, 0xAE, 
  0x08, 0xFF, 0xFF, 0xFD, 0xFF, 0x03, 0x00, 0x40, 0x00, 0x80, 0xF4, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 
  0xF6, 0xF6, 0xFD, 0x5D, 0xBD, 0x35, 0xF8, 0xEF, 0xFB, 0xFF, 0xFB, 0x02, 
  0x40, 0x82, 0x08, 0x40, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xDD, 0xCF, 0x7F, 0x5E, 0x56, 0x01, 
  0xFE, 0xFF, 0xFF, 0xFF, 0x0B, 0x00, 0x00, 0x5B, 0x02, 0xC0, 0xF1, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 
  0x66, 0xF3, 0xEF, 0xFF, 0x3B, 0xC0, 0xFF, 0xFF, 0xBF, 0xFE, 0x01, 0x00, 
  0x18, 0x7C, 0x00, 0x40, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x47, 0x7D, 0xFF, 0xFF, 0x5F, 0x09, 0xFC, 
  0xFF, 0x7F, 0x1F, 0xFC, 0x00, 0x00, 0xD9, 0x7B, 0x81, 0xC1, 0xF8, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE3, 
  0xAF, 0xBF, 0xFF, 0xB7, 0xC2, 0xFF, 0xFF, 0xFE, 0x07, 0xF4, 0x00, 0xC0, 
  0xFF, 0xFE, 0x05, 0x6A, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x93, 0xF2, 0xFF, 0xFF, 0x6A, 0xE0, 0xFF, 
  0xFF, 0xDE, 0x0F, 0xC0, 0x00, 0x00, 0xF0, 0xFF, 0x41, 0x66, 0xFE, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF1, 
  0xFF, 0xD7, 0x2B, 0x05, 0xFE, 0xFF, 0xFF, 0xFF, 0x80, 0xE0, 0x00, 0x00, 
  0xF0, 0xFF, 0x4F, 0xE9, 0xDC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xD9, 0x7F, 0x47, 0x96, 0x01, 0xFF, 0xFF, 
  0xBF, 0x7F, 0x00, 0x60, 0x00, 0x00, 0xFC, 0xFF, 0x17, 0x66, 0xDE, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 
  0xFD, 0xBD, 0xAA, 0xE0, 0xFF, 0xFF, 0xFF, 0x57, 0x00, 0x30, 0x00, 0x00, 
  0x9E, 0xFF, 0x6F, 0xE9, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xFD, 0xDB, 0x01, 0xFE, 0xFF, 0xFF, 
  0xFF, 0x56, 0x00, 0x18, 0x00, 0x00, 0x17, 0xFE, 0xAF, 0xBB, 0xFE, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 
  0xDF, 0x25, 0xA0, 0xFF, 0xFF, 0xBF, 0x7F, 0x07, 0x04, 0x08, 0x00, 0x80, 
  0x81, 0xFE, 0x7D, 0x94, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0xFF, 0x1E, 0xFC, 0xFF, 0xFF, 0xFF, 
  0xAF, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xA1, 0xFF, 0x6B, 0x79, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF3, 
  0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xA5, 0x00, 0x00, 0x00, 0x00, 0xE0, 
  0xD1, 0xDF, 0xBB, 0xB6, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x85, 0x00, 0x02, 0x00, 0x00, 0x38, 0xF1, 0x1D, 0xAF, 0xAD, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 
  0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x53, 0x28, 0x00, 0x00, 0x00, 0xFC, 
  0xF0, 0x1B, 0x54, 0xB9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 
  0x19, 0x00, 0x00, 0x00, 0x02, 0xCF, 0xF1, 0x8B, 0xA8, 0xC6, 0xFB, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 
  0xFF, 0xFF, 0xFF, 0xFE, 0x7F, 0x66, 0x0E, 0x00, 0x01, 0x00, 0x80, 0xC7, 
  0xF3, 0x1F, 0xD0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF, 0xFF, 0xFE, 0xFF, 0xEF, 0xDB, 
  0x03, 0x20, 0x00, 0x48, 0xC0, 0xC6, 0xF3, 0x0D, 0xEC, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 
  0xCE, 0xFF, 0xFF, 0xFF, 0x5F, 0x06, 0x10, 0x01, 0x08, 0x06, 0xF0, 0xC8, 
  0xF7, 0x19, 0x50, 0xC6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDE, 0xFF, 0xFF, 0xFF, 0x96, 0x02, 
  0x00, 0x00, 0xC0, 0x13, 0xFC, 0xC6, 0xFF, 0x19, 0xEC, 0xFB, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x38, 0xFF, 0xFF, 0x9F, 0xB7, 0x03, 0x00, 0xAD, 0xF0, 0x08, 0x3E, 0xC7, 
  0x7F, 0x1A, 0x79, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6B, 0xFC, 0xFF, 0xDE, 0xBE, 0x2B, 
  0xDB, 0xAD, 0x39, 0x86, 0x1F, 0xCF, 0x7F, 0x8C, 0xDC, 0xBA, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x93, 0xF9, 0xB7, 0x95, 0x59, 0xF5, 0x65, 0x66, 0xAD, 0xE1, 0x31, 0x9F, 
  0x7F, 0x1C, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x87, 0x81, 0xE5, 0xF9, 0x76, 0x96, 
  0x9D, 0xBA, 0x5B, 0xF0, 0x03, 0xFF, 0x7F, 0x0D, 0xE6, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x7D, 0x8E, 0x3F, 0x26, 0xAB, 0x6B, 0xA6, 0xED, 0x3F, 0xFE, 0x2F, 0xFF, 
  0x7F, 0x0E, 0xBC, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1D, 0xF6, 0xAB, 0xAE, 0x96, 
  0xB6, 0xF5, 0xD6, 0xDF, 0x5F, 0xFF, 0x6F, 0x83, 0xBF, 0xFE, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xEE, 0xD1, 0x98, 0x5D, 0x5A, 0xF6, 0x9B, 0xBE, 0xED, 0x8F, 0x5F, 0xFF, 
  0x8F, 0x47, 0xD9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xA3, 0xBB, 0xC3, 0x6B, 
  0xE6, 0x9F, 0xFC, 0x85, 0x3F, 0xFF, 0xCF, 0xC6, 0x7C, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFE, 0x8D, 0x86, 0xE6, 0xBD, 0x96, 0xFF, 0xFB, 0xFF, 0x9B, 0xFF, 0xFF, 
  0x4B, 0xA6, 0xDF, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x66, 0x76, 0x64, 0xF6, 0xD9, 
  0xBF, 0xEF, 0xFB, 0x8F, 0xFF, 0xFF, 0xCA, 0xA2, 0xEE, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x7F, 0x63, 0xDD, 0x1F, 0x4D, 0xFF, 0xAD, 0xFE, 0xFF, 0xBF, 0xFF, 0xFF, 
  0x74, 0x52, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xBF, 0xF8, 0x65, 0xFA, 0xFB, 0x9F, 
  0xF7, 0xFF, 0xFB, 0xBF, 0xFF, 0x7F, 0xF8, 0xE3, 0xF6, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x5F, 0xFC, 0x27, 0xEE, 0xAD, 0xF5, 0xFE, 0xFF, 0xE6, 0xBF, 0xFF, 0xFF, 
  0xE4, 0x91, 0x5F, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x37, 0xF6, 0xCF, 0xB1, 0xF7, 0xED, 
  0xDF, 0xFD, 0xE5, 0xFF, 0xFF, 0x3F, 0xCC, 0xB9, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x1F, 0xFF, 0x9F, 0x0F, 0xAE, 0xFF, 0xFF, 0xFF, 0xE7, 0xFF, 0xFF, 0x57, 
  0xC4, 0xC9, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC9, 0xFF, 0xBF, 0xBE, 0xEA, 0xFF, 
  0x7F, 0xFE, 0xFF, 0xFF, 0xFF, 0x27, 0x47, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xE7, 0xFF, 0x3F, 0xF4, 0xFF, 0xBF, 0xFD, 0xFF, 0xEF, 0xFF, 0xFF, 0xC1, 
  0xCF, 0xEC, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xF3, 0xFF, 0x7F, 0xC9, 0xF7, 0xBF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE1, 0x5F, 0xE6, 0xFE, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xF8, 0xFF, 0xFF, 0x90, 0x5F, 0xFF, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 
  0x3E, 0xFD, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFC, 0xFF, 0xFF, 0xB1, 0xFC, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x48, 0x9E, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 
  0xFF, 0xFF, 0xFF, 0x6D, 0x7F, 0xFF, 0xFB, 0xFF, 0xFF, 0xFF, 0x1F, 0x73, 
  0x1E, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x3B, 0xEF, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8B, 0x3E, 
  0x43, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x3F, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF3, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xB3, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x04, 0xFF, 
  0xD4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xA7, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x67, 0xE6, 0xFD, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFE, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFD, 0xFF, 0xFF, 0xFF, 0x03, 0xFE, 0x3D, 
  0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0xF9, 
  0xFF, 0xFF, 0xFF, 0x83, 0xFF, 0x5C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0xEB, 0xFF, 0xFF, 0xFF, 0x09, 0x7D, 0xD4, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xF7, 
  0xFB, 0xFD, 0x7F, 0xDB, 0xFD, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xE9, 0xFB, 0xBF, 0x73, 0xF9, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCC, 
  0xEB, 0xC9, 0xD3, 0xFF, 0x6B, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0xFB, 0xBF, 0xE3, 0xFF, 0xF5, 0xFE, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE3, 
  0xFF, 0xFD, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x67, 0xFD, 0xFF, 0xFF, 0x87, 0xD7, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 
  0x7B, 0x7F, 0xFD, 0xE3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xDF, 0xFC, 0xE1, 0xBF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 
  0xDE, 0xFF, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xC7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xEE, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, };


#endif
