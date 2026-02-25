#pragma once
#define SPLIT_USB_DETECT
#ifdef SPLIT_SIDE_LEFT
    #define MASTER_LEFT
#endif
#ifdef SPLIT_SIDE_RIGHT
    #define MASTER_RIGHT
#endif
