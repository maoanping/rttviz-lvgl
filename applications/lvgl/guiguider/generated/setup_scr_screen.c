/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"

lv_meter_indicator_t *screen_RPM_scale_1_ndline_0;
lv_meter_indicator_t *screen_SPEED_scale_1_ndline_0;

void setup_scr_screen(lv_ui *ui){

	//Write codes screen
	ui->screen = lv_obj_create(NULL);

	//Write style state: LV_STATE_DEFAULT for style_screen_main_main_default
	static lv_style_t style_screen_main_main_default;
	if (style_screen_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_main_main_default);
	else
		lv_style_init(&style_screen_main_main_default);
	//set background
	lv_style_set_bg_color(&style_screen_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	//set background opa
	lv_style_set_bg_opa(&style_screen_main_main_default, 0);

	lv_obj_add_style(ui->screen, &style_screen_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_canvas_1
	ui->root_canvas = lv_canvas_create(ui->screen);

	//put canvas to main screen
	lv_obj_set_pos(ui->root_canvas, 0, 0);
	lv_obj_set_size(ui->root_canvas, 480, 272);//TODO hardcode screen size

}
