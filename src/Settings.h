#pragma once

#define SETTINGS_KEY 1

// A structure containing our settings
typedef struct ClaySettings {
  GColor BackgroundColor;
  GColor TextColor;
} __attribute__((__packed__)) ClaySettings;

void default_settings();
ClaySettings load_settings();
void save_settings();
