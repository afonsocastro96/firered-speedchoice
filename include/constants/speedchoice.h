#ifndef POKEFIRERED_CONSTANTS_SPEEDCHOICE_H
#define POKEFIRERED_CONSTANTS_SPEEDCHOICE_H

#define STR_(x) #x
#define STR(x) STR_(x)

#define SPEEDCHOICE_VERSION_MAJOR         1
#define SPEEDCHOICE_VERSION_MINOR         1
#define SPEEDCHOICE_VERSION_RELSTEP       3
//#define SPEEDCHOICE_VERSION_RELEASELEVEL  a
//#define SPEEDCHOICE_VERSION_RELEASENO     0

#ifdef SPEEDCHOICE_VERSION_RELEASELEVEL
#define SPEEDCHOICE_VERSION STR(SPEEDCHOICE_VERSION_MAJOR) "." STR(SPEEDCHOICE_VERSION_MINOR) "." STR(SPEEDCHOICE_VERSION_RELSTEP) STR(SPEEDCHOICE_VERSION_RELEASELEVEL) STR(SPEEDCHOICE_VERSION_RELEASENO)
#else
#define SPEEDCHOICE_VERSION STR(SPEEDCHOICE_VERSION_MAJOR) "." STR(SPEEDCHOICE_VERSION_MINOR) "." STR(SPEEDCHOICE_VERSION_RELSTEP)
#endif

#define PRESET               0
#define PLAYER_NAME_SET      1
#define GENDER               2
#define EXPMATH              3
#define PLOTLESS             4
#define EARLY_SAFFRON        5
#define RACE_GOAL            6
#define SPINNERS             7
#define EARLYSURF            8
#define MAXVISION            9
#define GOOD_EARLY_WILDS    10
#define EASY_SWEET_SCENT    11
#define EASY_DEX_REWARDS    12
#define FAST_CATCH          13
#define EARLY_BIKE          14
#define GEN_7_X_ITEMS       15
#define EVO_EVERY_LEVEL     16
#define HM_BADGE_CHECKS     17
#define EASY_SURGE_CANS     18
#define NERF_BROCK          19

#define CURRENT_OPTIONS_NUM 20
// ----------------------
// STATIC OPTIONS
// ----------------------
#define PAGE        (CURRENT_OPTIONS_NUM + 0)
#define START_GAME  (CURRENT_OPTIONS_NUM + 1)


/*
 * Enumerations for GetPageOptionTrueIndex. When passing this, the function will
 * return the true index from that page given whether you are specifying the first
 * option of the page or the last one.
 */

#define FIRST 0
#define LAST 1

// We used to share the enums for options, but we don't anymore because it's confusing
// as fuck. Please define enums for each option and have them match the option config.

// ----------------------
// GENDER ENUM
// ----------------------

#define GENDER_FEMALE 0
#define GENDER_MALE 1
#define GENDER_OPTION_COUNT 2

// ----------------------
// EXP ENUM
// ----------------------

#define EXP_KEEP 0
#define EXP_BW 1
#define EXP_NONE 2
#define EXP_OPTION_COUNT 3

// ----------------------
// PLOTLESS ENUM
// ----------------------

#define PLOT_SEMI 0
#define PLOT_KEEP 1
#define PLOT_FULL 2
#define PLOT_OPTION_COUNT 3

// ----------------------
// EARLY SURF ENUM
// ----------------------

#define EARLY_SURF_YES 0
#define EARLY_SURF_NO  1
#define EARLY_SURF_OPTION_COUNT 2

// ----------------------
// SPINNERS ENUM
// ----------------------

#define SPIN_NERF 0
#define SPIN_KEEP 1
#define SPIN_HELL 2
#define SPIN_WHY 3
#define SPIN_OPTION_COUNT 4

// ----------------------
// MAX VISION ENUM
// ----------------------

#define MAX_OFF 0
#define MAX_SANE 1
#define MAX_HELL 2
#define MAX_OPTION_COUNT 3

// ----------------------
// GOOD EARLY WILDS ENUM
// ----------------------

#define GOOD_OFF 0
#define GOOD_STATIC 1
#define GOOD_RAND 2
#define GOOD_OPTION_COUNT 3

// ----------------------
// EASY SWEET SCENT ENUM
// ----------------------

#define EASY_SWEET_SCENT_OFF 0
#define EASY_SWEET_SCENT_TUTOR 1
#define EASY_SWEET_SCENT_HM05 2
#define EASY_SWEET_SCENT_OPTION_COUNT 3

// ----------------------
// EASY DEX REWARDS ENUM
// ----------------------

#define EASY_DEX_REWARDS_ON 0
#define EASY_DEX_REWARDS_OFF 1
#define EASY_DEX_REWARDS_OPTION_COUNT 2

// ----------------------
// FAST CATCH ENUM
// ----------------------

#define FAST_CATCH_ON 0
#define FAST_CATCH_OFF 1
#define FAST_CATCH_OPTION_COUNT 2

// ----------------------
// EARLY BIKE ENUM
// ----------------------

#define EARLY_BIKE_YES 0
#define EARLY_BIKE_NO 1
#define EARLY_BIKE_OPTION_COUNT 2

// ----------------------
// GEN 7 X ITEMS ENUM
// ----------------------

#define GEN_7_X_ITEMS_ON 0
#define GEN_7_X_ITEMS_OFF 1
#define GEN_7_X_ITEMS_OPTION_COUNT 2

// ----------------------
// EVO_EVERY_LEVEL ENUM
// ----------------------

#define EVO_EV_OFF 0
#define EVO_EV_STATIC 1
#define EVO_EV_RAND 2
#define EVO_EV_OPTION_COUNT 3

// ---------------------
// HM_BADGE_CHECKS ENUM
// ---------------------

#define BADGE_PURGE 0
#define BADGE_KEEP 1
#define BADGE_OPTION_COUNT 2

// --------------------
// EASY_SURGE_CANS ENUM
// --------------------
#define SURGE_NERF 0
#define SURGE_KEEP 1
#define SURGE_HELL 2
#define SURGE_WHY  3
#define SURGE_OPTION_COUNT 4

// --------------------
// RACE GOAL ENUM
// --------------------
#define GOAL_MANUAL 0
#define GOAL_HOF    1
#define GOAL_E4R2   2
#define GOAL_OPTION_COUNT 3

// --------------------
// EARLY SAFFRON ENUM
// --------------------
#define SAFFRON_YES 0
#define SAFFRON_NO  1
#define SAFFRON_OPTION_COUNT 2

// --------------------
// NERF BROCK ENUM
// --------------------
#define NERF_YES 0
#define NERF_NO  1
#define NERF_OPTION_COUNT 2

// Enumeration for optionType in the Speedchoice struct below.

#define NORMAL 0
#define ARROW 1
#define PLAYER_NAME 2

#endif //POKEFIRERED_CONSTANTS_SPEEDCHOICE_H
