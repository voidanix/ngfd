/*
 * ngfd - Non-graphical feedback daemon
 *
 * Copyright (C) 2010 Nokia Corporation. All rights reserved.
 *
 * Contact: Xun Chen <xun.chen@nokia.com>
 *
 * This software, including documentation, is protected by copyright
 * controlled by Nokia Corporation. All rights are reserved.
 * Copying, including reproducing, storing, adapting or translating,
 * any or all of this material requires the prior written consent of
 * Nokia Corporation. This material also contains confidential
 * information which may not be disclosed to others without the prior
 * written consent of Nokia.
 */

#include "ngf-led.h"

struct _NgfLed
{
    int dummy;
};

NgfLed*
ngf_led_create ()
{
    NgfLed *self = NULL;

    if ((self = g_new0 (NgfLed, 1)) == NULL)
        return NULL;

    return self;
}

void
ngf_led_destroy (NgfLed *self)
{
    if (self == NULL)
        return;

    g_free (self);
}

guint
ngf_led_start (NgfLed *self, const char *pattern)
{
    return 1;
}

void
ngf_led_stop (NgfLed *self, guint id)
{
    return;
}
