#pragma once

#include <stdint.h>
#include <stdio.h>

#define UNUSED __attribute__((unused))

#define error(...) fprintf(stderr, __VA_ARGS__)

#ifdef DEBUG
#define debug(...) fprintf(stderr, "[debug] "__VA_ARGS__)
#else
#define debug(...)
#endif

typedef struct tracking_opt {
    uint8_t foreground_program : 1;
    uint8_t mouse_click : 1;
    uint8_t keystroke : 1;
} tracking_opt_t;

int init_tracking();
int start_tracking(tracking_opt_t *opts);
void stop_tracking();
