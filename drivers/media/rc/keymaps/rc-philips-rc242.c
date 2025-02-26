// SPDX-License-Identifier: GPL-2.0+
// Copyright (c) 2019 Christian Hewitt

#include <media/rc-map.h>
#include <linux/module.h>

/*
 * The Philips RC242 remote ships is used with the IPTV/VOD STB
 * from O2 Czech Republic.
 */

static struct rc_map_table philips_rc242[] = {

	{ 0x40c, KEY_POWER },
	{ 0x44a, KEY_INFO },
	{ 0x461, KEY_FAVORITES },

	{ 0x401, KEY_1 },
	{ 0x402, KEY_2 },
	{ 0x403, KEY_3 },

	{ 0x404, KEY_4 },
	{ 0x405, KEY_5 },
	{ 0x406, KEY_6 },

	{ 0x407, KEY_7 },
	{ 0x408, KEY_8 },
	{ 0x409, KEY_9 },

	{ 0x448, KEY_ZOOM },
	{ 0x400, KEY_0 },
	{ 0x441, KEY_EPG },

	{ 0x412, KEY_CONTEXT_MENU },
	{ 0x437, KEY_RECORD },
	{ 0x430, KEY_PAUSE },
	{ 0x41d, KEY_ZOOM },

	{ 0x410, KEY_UP },
	{ 0x411, KEY_DOWN },
	{ 0x415, KEY_LEFT },
	{ 0x416, KEY_RIGHT },
	{ 0x424, KEY_OK },

	{ 0x414, KEY_VOLUMEUP },
	{ 0x41f, KEY_BACK },
	{ 0x40e, KEY_CHANNELUP },

	{ 0x417, KEY_VOLUMEDOWN },
	{ 0x40d, KEY_MUTE },
	{ 0x40a, KEY_CHANNELDOWN },

	{ 0x432, KEY_REWIND },
	{ 0x435, KEY_PLAYPAUSE },
	{ 0x436, KEY_STOP },
	{ 0x434, KEY_FORWARD },

	{ 0x451, KEY_PREVIOUSSONG },
	{ 0x43c, KEY_SUBTITLE },
	{ 0x40f, KEY_LANGUAGE },
	{ 0x450, KEY_NEXTSONG },

	{ 0x46b, KEY_RED },
	{ 0x46c, KEY_GREEN },
	{ 0x46d, KEY_YELLOW },
	{ 0x46e, KEY_BLUE },

};

static struct rc_map_list philips_rc242_map = {
	.map = {
		.scan     = philips_rc242,
		.size     = ARRAY_SIZE(philips_rc242),
		.rc_proto = RC_PROTO_RC5,
		.name     = RC_MAP_PHILIPS_RC242,
	}
};

static int __init init_rc_map_philips_rc242(void)
{
	return rc_map_register(&philips_rc242_map);
}

static void __exit exit_rc_map_philips_rc242(void)
{
	rc_map_unregister(&philips_rc242_map);
}

module_init(init_rc_map_philips_rc242)
module_exit(exit_rc_map_philips_rc242)

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Christian Hewitt <christianshewitt@gmail.com>");
