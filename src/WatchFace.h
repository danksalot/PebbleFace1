#pragma once
#include <pebble.h>

#define SETTINGS_KEY 1

// A structure containing our settings
typedef struct ClaySettings {
  GColor BackgroundColor;
  GColor TextColor;
  bool Animations;
} __attribute__((__packed__)) ClaySettings;

static void prv_default_settings();
static void prv_load_settings();
static void prv_save_settings();
static void prv_update_display();
static void inbox_received_handler(DictionaryIterator *iter, void *context);
static void window_load(Window *window);
static void window_unload(Window *window);
static void init(void);
static void deinit(void);



static void inbox_received_handler(DictionaryIterator *iter, void *context);
static void update_time();
static void tick_handler(struct tm *tick_time, TimeUnits units_changed);
static void main_window_load(Window *window);
static void main_window_unload(Window *window);
static void init();
static void deinit();


