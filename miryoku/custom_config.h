// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_BASE                                                                                                                           \
	&kp Q, &kp W, &kp E, &kp R, &kp T, &kp Y, &kp U, &kp I, &kp O, &kp P,                                                                            \
		L_MT(LGUI, A), L_MT(LALT, S), L_MT(LCTRL, D), L_MT(LSHFT, F), &kp G, &kp H, R_MT(LSHFT, J), R_MT(LCTRL, K), R_MT(LALT, L), R_MT(LGUI, SEMI), \
		U_LT(U_BUTTON, Z), &kp X, &kp C, &kp V, &kp B, &kp N, &kp M, &kp COMMA, &kp DOT, U_LT(U_BUTTON, SLASH),                      \
		U_NP, U_NP, U_LT(U_MOUSE, TAB), U_LT(U_NAV, SPACE), U_LT(U_MEDIA, ESC), U_LT(U_FUN, DEL), U_LT(U_NUM, RET), U_LT(U_SYM, BSPC), U_NP, U_NP

#define MIRYOKU_LAYER_NAV                                                                                    \
	U_BOOT, &u_to_U_TAP, &u_to_U_EXTRA, &u_to_U_BASE, U_NA, U_RDO, U_PST, U_CPY, U_CUT, U_UND,               \
		&kp LGUI, &kp LALT, &kp LCTRL, &kp LSHFT, U_NA, &u_caps_word, &kp LEFT, &kp DOWN, &kp UP, &kp RIGHT, \
		U_NA, &kp RALT, &u_to_U_NUM, &u_to_U_NAV, U_NA, &kp INS, &kp HOME, &kp PG_DN, &kp PG_UP, &kp END,    \
		U_NP, U_NP, &to U_GAME, U_NA, U_NA, &kp DEL, &kp RET, &kp BSPC, U_NP, U_NP

#define MIRYOKU_LAYER_NUM                                                                               \
	&kp LBKT, &kp N7, &kp N8, &kp N9, &kp RBKT, U_NA, &u_to_U_BASE, &u_to_U_EXTRA, &u_to_U_TAP, U_BOOT, \
		&kp APOS, &kp N4, &kp N5, &kp N6, &kp EQUAL, U_NA, &kp LSHFT, &kp LCTRL, &kp LALT, &kp LGUI,    \
		&kp GRAVE, &kp N1, &kp N2, &kp N3, &kp BSLH, U_NA, &u_to_U_NUM, &u_to_U_NAV, &kp RALT, U_NA,    \
		U_NP, U_NP, &kp DOT, &kp N0, &kp MINUS, U_NA, U_NA, U_NA, U_NP, U_NP

#define MIRYOKU_LAYER_SYM                                                                                      \
	&kp LBRC, &kp AMPS, &kp ASTRK, &kp LPAR, &kp RBRC, U_NA, &u_to_U_BASE, &u_to_U_EXTRA, &u_to_U_TAP, U_BOOT, \
		&kp DQT, &kp DLLR, &kp PRCNT, &kp CARET, &kp PLUS, U_NA, &kp LSHFT, &kp LCTRL, &kp LALT, &kp LGUI,     \
		&kp TILDE, &kp EXCL, &kp AT, &kp HASH, &kp PIPE, U_NA, &u_to_U_SYM, &u_to_U_MOUSE, &kp RALT, U_NA,     \
		U_NP, U_NP, &kp LPAR, &kp RPAR, &kp UNDER, U_NA, U_NA, U_NA, U_NP, U_NP

#define MIRYOKU_LAYER_GAME                                                                  \
	&kp TAB, &kp Q, &kp W, &kp E, &kp R, &kp Y, &kp U, &kp I, &kp O, &kp P,                 \
		&kp LSHFT, &kp A, &kp S, &kp D, &kp F, &kp H, &kp J, &kp K, &kp L, &kp SQT,         \
		&kp LCTRL, &kp Z, &kp X, &kp C, &kp V, &kp N, &kp M, &kp COMMA, &kp DOT, &kp SLASH, \
		U_NP, U_NP, &kp LALT, &kp SPC, &mo U_GAMENUM, &kp RET, &kp BSPC, &kp DEL, U_NP, U_NP

#define MIRYOKU_LAYER_GAMENUM                                                                           \
	&kp ESC, &kp NUM_1, &kp NUM_2, &kp NUM_3, &kp T, &kp LBKT, &kp F7, &kp F8, &kp F9, &kp RBKT,        \
		&kp LSHFT, &kp NUM_4, &kp NUM_5, &kp NUM_6, &kp G, &kp EQL, &kp F4, &kp F5, &kp F6, &kp SEMI,   \
		&kp LCTRL, &kp NUM_7, &kp NUM_8, &kp NUM_9, &kp B, &kp BSLH, &kp F1, &kp F2, &kp F3, &kp GRAVE, \
		U_NP, U_NP, &to U_BASE, &kp SPC, &none, &kp MINUS, &kp NUM_0, &kp DOT, U_NP, U_NP

#define MIRYOKU_LAYER_LIST      \
	MIRYOKU_X(BASE, "Base")     \
	MIRYOKU_X(EXTRA, "Extra")   \
	MIRYOKU_X(TAP, "Tap")       \
	MIRYOKU_X(BUTTON, "Button") \
	MIRYOKU_X(NAV, "Nav")       \
	MIRYOKU_X(MOUSE, "Mouse")   \
	MIRYOKU_X(MEDIA, "Media")   \
	MIRYOKU_X(NUM, "Num")       \
	MIRYOKU_X(SYM, "Sym")       \
	MIRYOKU_X(FUN, "Fun")       \
	MIRYOKU_X(GAME, "Game")     \
	MIRYOKU_X(GAMENUM, "GNum")

#define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_GAMENUM MIRYOKU_MAPPING

#define U_BASE 0
#define U_EXTRA 1
#define U_TAP 2
#define U_BUTTON 3
#define U_NAV 4
#define U_MOUSE 5
#define U_MEDIA 6
#define U_NUM 7
#define U_SYM 8
#define U_FUN 9
#define U_GAME 10
#define U_GAMENUM 11
