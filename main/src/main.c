#include <stdio.h>
#include "config.h"
#include "component_a.h" // Include your component headers

void app_main(void) {
    printf("Hello from ESP32-S3!\n");
        int result = component_a_function(5);
            printf("Result from component_a: %d\n", result);

                #ifdef ENABLE_TESTS
                        // Run tests here if needed for on-device testing
                            #endif
                            }
                            