// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(GAME,   "Game") \
MIRYOKU_X(GAME2,  "Game2") 

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_GAME   10
#define U_GAME2  11

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SEMI),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_LT(U_FUN, DEL),  U_LT(U_NUM, RET),  U_LT(U_SYM, BSPC), U_NP,              U_NP


#define MIRYOKU_LAYER_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
&to U_GAME,        &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp DEL,           &kp RET,           &kp BSPC,           U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp APOS,          &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp DQT,           &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_GAME \
&kp TAB, 		   &kp Q,             &kp W,             &kp E,             &kp R,             &to U_BASE         &to U_BASE         &to U_BASE         &to U_BASE         &to U_BASE 		   \
&kp LSHIFT,  	   &kp A,     	      &kp S,     		 &kp D,             &kp F,    		   &to U_BASE         &to U_BASE         &to U_BASE         &to U_BASE         &to U_BASE 		   \
&kp LCTRL,  	   &kp Z, 			  &kp X,     		 &kp C,             &kp V,             &to U_BASE         &to U_BASE         &to U_BASE         &to U_BASE         &to U_BASE 		   \
U_NP,              U_NP,              &mo U_GAME2,       &kp SPACE,			&mo U_NUM,	       &to U_BASE         &to U_BASE         &to U_BASE	        U_NP,              U_NP

#define MIRYOKU_LAYER_GAME2 \
&kp T, 		       &kp Y,             &kp U,             &kp I,             &kp O,             &to U_BASE         &to U_BASE         &to U_BASE         &to U_BASE         &to U_BASE 		   \
&kp G,  	       &kp H,     	  	  &kp J,    		 &kp K,             &kp L,    		   &to U_BASE         &to U_BASE         &to U_BASE         &to U_BASE         &to U_BASE 		   \
&kp B,  	   	   &kp N, 			  &kp M,     		 &kp COMMA,         &kp DOT,           &to U_BASE         &to U_BASE         &to U_BASE         &to U_BASE         &to U_BASE 		   \
U_NP,              U_NP,              U_NU,              U_NU,   			U_NU,    		   &to U_BASE         &to U_BASE         &to U_BASE	        U_NP,              U_NP