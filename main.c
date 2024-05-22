#include <nrfx.h>
#include <nrf5340_application.h>
#include <nrf.h>
#include <nrfx_config.h>
#include <nrfx_uarte.h>
#include <nrfx_systick.h>
#include <nrf_gpio.h>
#include <stdlib.h>
#include <math.h>
#include <nrfx_glue.h>
#include <time.h>
#include "30.h"
#include <stdio.h>




static nrfx_uarte_t instance = NRFX_UARTE_INSTANCE(0);


int main(void)
{
    //start the programm
    start_game_grupp_30();
    return 0;
}

