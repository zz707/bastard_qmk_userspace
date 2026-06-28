#pragma once

// Serial communication pin (BastardKB standard for promicro/Elite-C holder)
#define SOFT_SERIAL_PIN GP1

// Force PIO-based serial driver instead of bitbang
// This avoids potential CPU bitbang timing issues on RP2040 clones
#define SERIAL_PIO_USE_PIO0

// Increase serial communication reliability margins
#define SPLIT_MAX_CONNECTION_ERRORS 10
#define SPLIT_CONNECTION_CHECK_TIMEOUT 1000
