#include <pebble.h>
#include "Settings.h"

// A struct for our specific settings (see main.h)
ClaySettings settings;

// Initialize the default settings
void default_settings() {
  settings.BackgroundColor = GColorVividCerulean;
  settings.TextColor = GColorBlack;
}

// Read settings from persistent storage
ClaySettings load_settings() {
  // Load the default settings
  default_settings();
  // Read settings from persistent storage, if they exist
  persist_read_data(SETTINGS_KEY, &settings, sizeof(settings));
  
  return settings;
}

// Save the settings to persistent storage
void save_settings() {
  persist_write_data(SETTINGS_KEY, &settings, sizeof(settings));
}

