static const struct BgTemplate sPartyMenuBgTemplates[] =
{
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 1,
        .baseTile = 0
    },
    {
        .bg = 1,
        .charBaseIndex = 0,
        .mapBaseIndex = 30,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 2,
        .baseTile = 0
    },
    {
        .bg = 2,
        .charBaseIndex = 0,
        .mapBaseIndex = 28,
        .screenSize = 1,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    },
};

enum
{
    PARTY_BOX_LEFT_COLUMN,
    PARTY_BOX_RIGHT_COLUMN,
    PARTY_BOX_EQUAL_COLUMN //Custom party menu
};

static const struct PartyMenuBoxInfoRects sPartyBoxInfoRects[] =
{
    [PARTY_BOX_LEFT_COLUMN] = 
    {
        BlitBitmapToPartyWindow_LeftColumn, 
        {
            //The below are the x, y, width, and height for each of the following info
            24, 11, 40, 13, // Nickname
            32, 20, 32,  8, // Level
            64, 20,  8,  8, // Gender
            38, 37, 24,  8, // HP
            53, 37, 24,  8, // Max HP
            24, 35, 48,  3  // HP bar
        }, 
        12, 34, 64, 16      // Description text (e.g. NO USE)
    },
	
	[PARTY_BOX_EQUAL_COLUMN] = //Custom party menu
    {
        BlitBitmapToPartyWindow_Equal, 
        {
            //The below are the x, y, width, and height for each of the following info
            33,  2, 40, 13, // Nickname
             3, 25, 32,  8, // Level 85,  1, 32,  8,
           100,  1,  8,  8, // Gender 79,  1,  8,  8, 
            48, 23, 24,  8, // HP
            63, 23, 24,  8, // Max HP
            48, 18, 56,  3  // HP bar
        }, 
        33, 13, 64, 16      // Description text (e.g. NO USE)
    },//
	
    [PARTY_BOX_RIGHT_COLUMN] = 
    {
        BlitBitmapToPartyWindow_RightColumn, 
        {
             // See above comment
             22,  3, 40, 13, // Nickname
             30, 12, 32,  8, // Level
             62, 12,  8,  8, // Gender
            102, 12, 24,  8, // HP
            117, 12, 24,  8, // Max HP
             88, 10, 48,  3  // HP bar
        }, 
        77, 4, 64, 16        // Description text
    },
    [PARTY_BOX_EQUAL_COLUMN] = //Custom party menu
    {
        BlitBitmapToPartyWindow_Equal, 
        {
            //The below are the x, y, width, and height for each of the following info
            33,  2, 40, 13, // Nickname
             3, 25, 32,  8, // Level 85,  1, 32,  8,
           100,  1,  8,  8, // Gender 79,  1,  8,  8, 
            48, 23, 24,  8, // HP
            63, 23, 24,  8, // Max HP
            48, 18, 56,  3  // HP bar
        }, 
        33, 13, 64, 16      // Description text (e.g. NO USE)
    },//
};


// Each layout array has an array for each of the 6 party slots
// The array for each slot has the sprite coords of its various sprites in the following order
// Pokemon icon (x, y), held item (x, y), status condition (x, y), menu pokeball (x, y)
static const u8 sPartyMenuSpriteCoords[PARTY_LAYOUT_COUNT][PARTY_SIZE][4 * 2] =
{
    [PARTY_LAYOUT_SINGLE] = 
    {
        { 24,  14,  38,  33, 104,  31,  24,  18},
        {136,  22, 150,  41, 216,  39, 136,  26},
        { 24,  54,  38,  73, 104,  71,  24,  58},
        {136,  62, 150,  81, 216,  79, 136,  66},
        { 24,  94,  38, 113, 104, 111,  24,  98},
        {136, 102, 150, 121, 216, 119, 136, 106},
    },
    [PARTY_LAYOUT_DOUBLE] = 
    {
        {16, 24, 20, 34, 50, 36, 16, 18},
        {16, 80, 20, 90, 50, 92, 16, 74},
        {104, 18, 108, 28, 136, 27, 102, 25},
        {104, 50, 108, 60, 136, 59, 102, 57},
        {104, 82, 108, 92, 136, 91, 102, 89},
        {104, 114, 108, 124, 136, 123, 102, 121},
    },
    [PARTY_LAYOUT_MULTI] = 
    {
        {16, 24, 20, 34, 50, 36, 16, 18},
        {16, 80, 20, 90, 50, 92, 16, 74},
        {104, 26, 106, 36, 136, 35, 102, 33},
        {104, 50, 106, 60, 136, 59, 102, 57},
        {104, 82, 106, 92, 136, 91, 102, 89},
        {104, 106, 106, 116, 136, 115, 102, 113},
    },
    [PARTY_LAYOUT_MULTI_SHOWCASE] = 
    {
        {16, 32, 20, 42, 50, 44, 16, 26},
        {104, 34, 106, 44, 136, 43, 102, 41},
        {104, 58, 106, 68, 136, 67, 102, 65},
        {16, 104, 20, 114, 50, 116, 16, 98},
        {104, 106, 106, 116, 136, 115, 102, 113},
        {104, 130, 106, 140, 136, 139, 102, 137},
    },
};

// Used only when both Cancel and Confirm are present
static const u32 sConfirmButton_Tilemap[] = INCBIN_U32("graphics/interface/party_menu_confirm_button.bin");
static const u32 sCancelButton_Tilemap[] = INCBIN_U32("graphics/interface/party_menu_cancel_button.bin");

// Text colors for BG, FG, and Shadow in that order
static const u8 sFontColorTable[][3] =
{
    {TEXT_COLOR_TRANSPARENT, 1, 4},  // Default
    {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_WHITE,      TEXT_COLOR_GREEN},      // Unused
    {TEXT_COLOR_TRANSPARENT, TEXT_DYNAMIC_COLOR_2,  TEXT_DYNAMIC_COLOR_3},  // Gender symbol
    {TEXT_COLOR_WHITE,       TEXT_COLOR_DARK_GREY,  TEXT_COLOR_LIGHT_GREY}, // Selection actions
    {TEXT_COLOR_WHITE,       TEXT_COLOR_BLUE,       TEXT_COLOR_LIGHT_BLUE}, // Field moves
    {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_WHITE,      TEXT_COLOR_DARK_GREY},  // Unused
};

/*/
static const u8 sFontColorTable[][3] =
{
    {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_LIGHT_GREY, TEXT_COLOR_DARK_GREY},  // Default
    {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_WHITE,      TEXT_COLOR_GREEN},      // Unused
    {TEXT_COLOR_TRANSPARENT, TEXT_DYNAMIC_COLOR_2,  TEXT_DYNAMIC_COLOR_3},  // Gender symbol
    {TEXT_COLOR_WHITE,       TEXT_COLOR_DARK_GREY,  TEXT_COLOR_LIGHT_GREY}, // Selection actions
    {TEXT_COLOR_WHITE,       TEXT_COLOR_BLUE,       TEXT_COLOR_LIGHT_BLUE}, // Field moves
    {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_WHITE,      TEXT_COLOR_DARK_GREY},  // Unused
};
/*/

static const struct WindowTemplate sSinglePartyMenuWindowTemplate[] =
{
    {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 3,
        .width = 10,
        .height = 7,
        .paletteNum = 3,
        .baseBlock = 0x63,
    },
    {
        .bg = 0,
        .tilemapLeft = 12,
        .tilemapTop = 1,
        .width = 18,
        .height = 3,
        .paletteNum = 4,
        .baseBlock = 0xA9,
    },
    {
        .bg = 0,
        .tilemapLeft = 12,
        .tilemapTop = 4,
        .width = 18,
        .height = 3,
        .paletteNum = 5,
        .baseBlock = 0xDF,
    },
    {
        .bg = 0,
        .tilemapLeft = 12,
        .tilemapTop = 7,
        .width = 18,
        .height = 3,
        .paletteNum = 6,
        .baseBlock = 0x115,
    },
    {
        .bg = 0,
        .tilemapLeft = 12,
        .tilemapTop = 10,
        .width = 18,
        .height = 3,
        .paletteNum = 7,
        .baseBlock = 0x14B,
    },
    {
        .bg = 0,
        .tilemapLeft = 12,
        .tilemapTop = 13,
        .width = 18,
        .height = 3,
        .paletteNum = 8,
        .baseBlock = 0x181,
    },
    {
        .bg = 2,
        .tilemapLeft = 1,
        .tilemapTop = 15,
        .width = 28,
        .height = 4,
        .paletteNum = 14,
        .baseBlock = 0x1DF,
    },
    DUMMY_WIN_TEMPLATE
};

static const struct WindowTemplate sSinglePartyMenuWindowTemplate_Equal[] = //Custom party menu
{
    {//Slot 0 left
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 0,
        .width = 14,
        .height = 5,
        .paletteNum = 3,
        .baseBlock = 0x63,
    },
    {//Slot 1 right
        .bg = 0,
        .tilemapLeft = 15,
        .tilemapTop = 1,
        .width = 14,
        .height = 5,
        .paletteNum = 4,
        .baseBlock = 0xA9,
    },
    {//Slot 2 left
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 5,
        .width = 14,
        .height = 5,
        .paletteNum = 5,
        .baseBlock = 0xEF, //0xDF,
    },
    {//Slot 3 right
        .bg = 0,
        .tilemapLeft = 15,
        .tilemapTop = 6,
        .width = 14,
        .height = 5,
        .paletteNum = 6,
        .baseBlock = 0x135, //0x115,
    },
    {//Slot 4 left
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 10,
        .width = 14,
        .height = 5,
        .paletteNum = 7,
        .baseBlock = 0x17B, //0x14B,
    },
    {//Slot 5 right
        .bg = 0,
        .tilemapLeft = 15,
        .tilemapTop = 11,
        .width = 14,
        .height = 5,
        .paletteNum = 8,
        .baseBlock = 0x1C1, //0x181,
    },
    {
        .bg = 2,
        .tilemapLeft = 1,
        .tilemapTop = 15,
        .width = 28,
        .height = 4,
        .paletteNum = 14,
        .baseBlock = 0x21F, //0x1DF,
    },
    DUMMY_WIN_TEMPLATE
};//

static const struct WindowTemplate sDoublePartyMenuWindowTemplate[] =
{
    {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 1,
        .width = 10,
        .height = 7,
        .paletteNum = 3,
        .baseBlock = 0x63,
    },
    {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 8,
        .width = 10,
        .height = 7,
        .paletteNum = 4,
        .baseBlock = 0xA9,
    },
    {
        .bg = 0,
        .tilemapLeft = 12,
        .tilemapTop = 1,
        .width = 18,
        .height = 3,
        .paletteNum = 5,
        .baseBlock = 0xEF,
    },
    {
        .bg = 0,
        .tilemapLeft = 12,
        .tilemapTop = 5,
        .width = 18,
        .height = 3,
        .paletteNum = 6,
        .baseBlock = 0x125,
    },
    {
        .bg = 0,
        .tilemapLeft = 12,
        .tilemapTop = 9,
        .width = 18,
        .height = 3,
        .paletteNum = 7,
        .baseBlock = 0x15B,
    },
    {
        .bg = 0,
        .tilemapLeft = 12,
        .tilemapTop = 13,
        .width = 18,
        .height = 3,
        .paletteNum = 8,
        .baseBlock = 0x191,
    },
    {
        .bg = 2,
        .tilemapLeft = 1,
        .tilemapTop = 15,
        .width = 28,
        .height = 4,
        .paletteNum = 14,
        .baseBlock = 0x1DF,
    },
    DUMMY_WIN_TEMPLATE
};

static const struct WindowTemplate sMultiPartyMenuWindowTemplate[] =
{
    {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 1,
        .width = 10,
        .height = 7,
        .paletteNum = 3,
        .baseBlock = 0x63,
    },
    {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 8,
        .width = 10,
        .height = 7,
        .paletteNum = 4,
        .baseBlock = 0xA9,
    },
    {
        .bg = 0,
        .tilemapLeft = 12,
        .tilemapTop = 2,
        .width = 18,
        .height = 3,
        .paletteNum = 5,
        .baseBlock = 0xEF,
    },
    {
        .bg = 0,
        .tilemapLeft = 12,
        .tilemapTop = 5,
        .width = 18,
        .height = 3,
        .paletteNum = 6,
        .baseBlock = 0x125,
    },
    {
        .bg = 0,
        .tilemapLeft = 12,
        .tilemapTop = 9,
        .width = 18,
        .height = 3,
        .paletteNum = 7,
        .baseBlock = 0x15B,
    },
    {
        .bg = 0,
        .tilemapLeft = 12,
        .tilemapTop = 12,
        .width = 18,
        .height = 3,
        .paletteNum = 8,
        .baseBlock = 0x191,
    },
    {
        .bg = 2,
        .tilemapLeft = 1,
        .tilemapTop = 15,
        .width = 28,
        .height = 4,
        .paletteNum = 14,
        .baseBlock = 0x1DF,
    },
    DUMMY_WIN_TEMPLATE
};

static const struct WindowTemplate sShowcaseMultiPartyMenuWindowTemplate[] =
{
    {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 2,
        .width = 10,
        .height = 7,
        .paletteNum = 3,
        .baseBlock = 0x63,
    },
    {
        .bg = 0,
        .tilemapLeft = 12,
        .tilemapTop = 3,
        .width = 18,
        .height = 3,
        .paletteNum = 5,
        .baseBlock = 0xA9,
    },
    {
        .bg = 0,
        .tilemapLeft = 12,
        .tilemapTop = 6,
        .width = 18,
        .height = 3,
        .paletteNum = 6,
        .baseBlock = 0xDF,
    },
    {
        .bg = 2,
        .tilemapLeft = 1,
        .tilemapTop = 11,
        .width = 10,
        .height = 7,
        .paletteNum = 4,
        .baseBlock = 0x115,
    },
    {
        .bg = 2,
        .tilemapLeft = 12,
        .tilemapTop = 12,
        .width = 18,
        .height = 3,
        .paletteNum = 7,
        .baseBlock = 0x16B,
    },
    {
        .bg = 2,
        .tilemapLeft = 12,
        .tilemapTop = 15,
        .width = 18,
        .height = 3,
        .paletteNum = 8,
        .baseBlock = 0x1A1,
    },
    DUMMY_WIN_TEMPLATE
};

static const struct WindowTemplate sCancelButtonWindowTemplate =
{
    .bg = 0,
    .tilemapLeft = 24,
    .tilemapTop = 17,
    .width = 6,
    .height = 2,
    .paletteNum = 3,
    .baseBlock = 0x1C7,
};

static const struct WindowTemplate sCancelButtonWindowTemplate_equal =
{
    .bg = 0,
    .tilemapLeft = 24,
    .tilemapTop = 17,
    .width = 6,
    .height = 2,
    .paletteNum = 3,
    .baseBlock = 0x207, //0x1C7,  //Custom party menu
};

static const struct WindowTemplate sMultiCancelButtonWindowTemplate =
{
    .bg = 0,
    .tilemapLeft = 24,
    .tilemapTop = 18,
    .width = 6,
    .height = 2,
    .paletteNum = 3,
    .baseBlock = 0x1C7,
};

static const struct WindowTemplate sMultiCancelButtonWindowTemplate_equal =
{
    .bg = 0,
    .tilemapLeft = 24,
    .tilemapTop = 18,
    .width = 6,
    .height = 2,
    .paletteNum = 3,
    .baseBlock = 0x207, //0x1C7,  //Custom party menu
};

static const struct WindowTemplate sConfirmButtonWindowTemplate =
{
    .bg = 0,
    .tilemapLeft = 24,
    .tilemapTop = 16,
    .width = 6,
    .height = 2,
    .paletteNum = 3,
    .baseBlock = 0x1D3,
};

static const struct WindowTemplate sConfirmButtonWindowTemplate_equal =
{
    .bg = 0,
    .tilemapLeft = 24,
    .tilemapTop = 16,
    .width = 6,
    .height = 2,
    .paletteNum = 3,
    .baseBlock = 0x213, //0x1D3,  //Custom party menu
};

static const struct WindowTemplate sDefaultPartyMsgWindowTemplate =
{
    .bg = 2,
    .tilemapLeft = 1,
    .tilemapTop = 17,
    .width = 21,
    .height = 2,
    .paletteNum = 15,
    .baseBlock = 0x24F,
};

static const struct WindowTemplate sDoWhatWithMonMsgWindowTemplate =
{
    .bg = 2,
    .tilemapLeft = 1,
    .tilemapTop = 17,
    .width = 16,
    .height = 2,
    .paletteNum = 15,
    .baseBlock = 0x279,
};

static const struct WindowTemplate sDoWhatWithItemMsgWindowTemplate =
{
    .bg = 2,
    .tilemapLeft = 1,
    .tilemapTop = 17,
    .width = 20,
    .height = 2,
    .paletteNum = 15,
    .baseBlock = 0x299,
};

static const struct WindowTemplate sDoWhatWithMailMsgWindowTemplate =
{
    .bg = 2,
    .tilemapLeft = 1,
    .tilemapTop = 17,
    .width = 18,
    .height = 2,
    .paletteNum = 15,
    .baseBlock = 0x299,
};

static const struct WindowTemplate sWhichMoveMsgWindowTemplate =
{
    .bg = 2,
    .tilemapLeft = 1,
    .tilemapTop = 17,
    .width = 16,
    .height = 2,
    .paletteNum = 15,
    .baseBlock = 0x299,
};

static const struct WindowTemplate sAlreadyHoldingOneMsgWindowTemplate =
{
    .bg = 2,
    .tilemapLeft = 1,
    .tilemapTop = 15,
    .width = 20,
    .height = 4,
    .paletteNum = 15,
    .baseBlock = 0x299,
};

static const struct WindowTemplate sItemGiveTakeWindowTemplate =
{
    .bg = 2,
    .tilemapLeft = 23,
    .tilemapTop = 11,
    .width = 6,
    .height = 8,
    .paletteNum = 14,
    .baseBlock = 0x39D,
};

static const struct WindowTemplate sMailReadTakeWindowTemplate =
{
    .bg = 2,
    .tilemapLeft = 21,
    .tilemapTop = 13,
    .width = 8,
    .height = 6,
    .paletteNum = 14,
    .baseBlock = 0x39D,
};

static const struct WindowTemplate sMoveSelectWindowTemplate =
{
    .bg = 2,
    .tilemapLeft = 19,
    .tilemapTop = 11,
    .width = 10,
    .height = 8,
    .paletteNum = 14,
    .baseBlock = 0x2E9,
};

static const struct WindowTemplate sPartyMenuYesNoWindowTemplate =
{
    .bg = 2,
    .tilemapLeft = 21,
    .tilemapTop = 9,
    .width = 5,
    .height = 4,
    .paletteNum = 14,
    .baseBlock = 0x2E9,
};

static const struct WindowTemplate sLevelUpStatsWindowTemplate =
{
    .bg = 2,
    .tilemapLeft = 19,
    .tilemapTop = 1,
    .width = 10,
    .height = 11,
    .paletteNum = 14,
    .baseBlock = 0x2E9,
};

static const struct WindowTemplate sUnusedWindowTemplate_08615978 =
{
    .bg = 2,
    .tilemapLeft = 2,
    .tilemapTop = 15,
    .width = 27,
    .height = 4,
    .paletteNum = 14,
    .baseBlock = 0x1DF,
};

static const struct WindowTemplate sUnusedWindowTemplate_08615980 =
{
    .bg = 2,
    .tilemapLeft = 0,
    .tilemapTop = 13,
    .width = 18,
    .height = 3,
    .paletteNum = 12,
    .baseBlock = 0x39D,
};

// Tile nums
static const u8 sMainSlotTileNums[] = {24, 25, 25, 25, 25, 25, 25, 25, 25, 26,
                                       32, 33, 33, 33, 33, 33, 33, 33, 33, 34,
                                       32, 33, 33, 33, 33, 33, 33, 33, 33, 34,
                                       32, 33, 33, 33, 33, 33, 33, 33, 33, 34,
                                       40, 59, 60, 58, 58, 58, 58, 58, 58, 61,
                                       15, 16, 16, 16, 16, 16, 16, 16, 16, 17,
                                       46, 47, 47, 47, 47, 47, 47, 47, 47, 48};

static const u8 sMainSlotTileNums_Egg[] = {24, 25, 25, 25, 25, 25, 25, 25, 25, 26,
                                           32, 33, 33, 33, 33, 33, 33, 33, 33, 34,
                                           32, 33, 33, 33, 33, 33, 33, 33, 33, 34,
                                           32, 33, 33, 33, 33, 33, 33, 33, 33, 34,
                                           40, 41, 41, 41, 41, 41, 41, 41, 41, 42,
                                           15, 16, 16, 16, 16, 16, 16, 16, 16, 17,
                                           46, 47, 47, 47, 47, 47, 47, 47, 47, 48};

static const u8 sOtherSlotsTileNums[] = {43, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 45,
                                         49, 33, 33, 33, 33, 33, 33, 33, 33, 52, 53, 51, 51, 51, 51, 51, 51, 54,
                                         55, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 57};

static const u8 sOtherSlotsTileNums_Egg[] = {43, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 45,
                                             49, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 50,
                                             55, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 57};

static const u8 sEmptySlotTileNums[] = {21, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 23,
                                        30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31,
                                        37, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 39};

//Custom party menu
static const u8 sEqualMainSlotTileNums[] =      {43, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 45,
                                                 49, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 50,
                                                 49, 33, 33, 33, 52, 53, 51, 51, 51, 51, 51, 51, 51, 54,
                                                 49, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 50,
                                                 55, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 57};

static const u8 sEqualMainSlotTileNums_Egg[] =  {43, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 45,
                                                 49, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 50,
                                                 49, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 50,
                                                 49, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 50,
                                                 55, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 57};

static const u8 sEqualEmptySlotTileNums[] = {21, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 23,
                                             30,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 31,
                                             30,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 31,
                                             30,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 31,
                                             37, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 39};
//
// Palette offsets
static const u8 sGenderPalOffsets[] 					= {11,  12};
static const u8 sHPBarPalOffsets[] 						= { 15,  15};

// Palette ids
static const u8 sGenderMalePalIds[] 					= {74,  75};
static const u8 sGenderFemalePalIds[] 					= {76,  77};
static const u8 sHPBarGreenPalIds[] 					= {63,  63};
static const u8 sHPBarYellowPalIds[] 					= {62,  62};
static const u8 sHPBarRedPalIds[] 						= {60,  60};

static const u8 sPartyBoxNoMonPalOffsets[] 				= { 1,  11, 12};

static const u8 sPartyBoxPalOffsets1[] 					= { 4,  5,  6};
static const u8 sPartyBoxPalOffsets2[] 					= { 5,  7,  8}; //Colors to change when selected

static const u8 sPartyBoxEmptySlotPalIds1[] 			= {52,  53,  54};
static const u8 sPartyBoxEmptySlotPalIds2[] 			= {49,  55,  56};

static const u8 sPartyBoxMultiPalIds1[] 				= {68,  69,  70};
static const u8 sPartyBoxMultiPalIds2[] 				= {65,  71,  72};

static const u8 sPartyBoxFaintedPalIds1[] 				= {84,  85,  86};
static const u8 sPartyBoxFaintedPalIds2[] 				= {81,  87,  88};

//Selected Mon
static const u8 sPartyBoxCurrSelectionPalIds1[] 		= {116, 117, 118};  // {116, 117, 118}; //Shadow
static const u8 sPartyBoxCurrSelectionPalIds2[] 		= {109,  101,  102};  // {97,  103, 104}; //Selected Mon

static const u8 sPartyBoxSelectedForActionPalIds1[] 	= {100, 101, 102};
static const u8 sPartyBoxSelectedForActionPalIds2[] 	= {161, 167, 168};

static const u8 sPartyBoxCurrSelectionMultiPalIds[] 	= {132, 133, 134};
static const u8 sPartyBoxCurrSelectionFaintedPalIds[] 	= {148, 149, 150};

static const u8 sPartyBoxNoMonPalIds[] 					= {17,  27,  28};

static const u8 *const sActionStringTable[] =
{
    [PARTY_MSG_CHOOSE_MON]             = gText_ChoosePokemon,
    [PARTY_MSG_CHOOSE_MON_OR_CANCEL]   = gText_ChoosePokemonCancel,
    [PARTY_MSG_CHOOSE_MON_AND_CONFIRM] = gText_ChoosePokemonConfirm,
    [PARTY_MSG_MOVE_TO_WHERE]          = gText_MoveToWhere,
    [PARTY_MSG_TEACH_WHICH_MON]        = gText_TeachWhichPokemon,
    [PARTY_MSG_USE_ON_WHICH_MON]       = gText_UseOnWhichPokemon,
    [PARTY_MSG_GIVE_TO_WHICH_MON]      = gText_GiveToWhichPokemon,
    [PARTY_MSG_NOTHING_TO_CUT]         = gText_NothingToCut,
    [PARTY_MSG_CANT_SURF_HERE]         = gText_CantSurfHere,
    [PARTY_MSG_ALREADY_SURFING]        = gText_AlreadySurfing,
    [PARTY_MSG_CURRENT_TOO_FAST]       = gText_CurrentIsTooFast,
    [PARTY_MSG_ENJOY_CYCLING]          = gText_EnjoyCycling,
    [PARTY_MSG_ALREADY_IN_USE]         = gText_InUseAlready_PM,
    [PARTY_MSG_CANT_USE_HERE]          = gText_CantUseHere,
    [PARTY_MSG_NO_MON_FOR_BATTLE]      = gText_NoPokemonForBattle,
    [PARTY_MSG_CHOOSE_MON_2]           = gText_ChoosePokemon2,
    [PARTY_MSG_NOT_ENOUGH_HP]          = gText_NotEnoughHp,
    [PARTY_MSG_X_MONS_ARE_NEEDED]      = gText_PokemonAreNeeded,
    [PARTY_MSG_MONS_CANT_BE_SAME]      = gText_PokemonCantBeSame,
    [PARTY_MSG_NO_SAME_HOLD_ITEMS]     = gText_NoIdenticalHoldItems,
    [PARTY_MSG_UNUSED]                 = gText_EmptyString2,
    [PARTY_MSG_DO_WHAT_WITH_MON]       = gText_DoWhatWithPokemon,
    [PARTY_MSG_RESTORE_WHICH_MOVE]     = gText_RestoreWhichMove,
    [PARTY_MSG_BOOST_PP_WHICH_MOVE]    = gText_BoostPp,
    [PARTY_MSG_DO_WHAT_WITH_ITEM]      = gText_DoWhatWithItem,
    [PARTY_MSG_DO_WHAT_WITH_MAIL]      = gText_DoWhatWithMail,
    [PARTY_MSG_ALREADY_HOLDING_ONE]    = gText_AlreadyHoldingOne,
    [PARTY_MSG_MOVE_ITEM_WHERE]        = gText_MoveItemWhere,
};

static const u8 *const sDescriptionStringTable[] =
{
    [PARTYBOX_DESC_NO_USE]     = gText_NoUse,
    [PARTYBOX_DESC_ABLE_3]     = gText_Able,
    [PARTYBOX_DESC_FIRST]      = gText_First_PM,
    [PARTYBOX_DESC_SECOND]     = gText_Second_PM,
    [PARTYBOX_DESC_THIRD]      = gText_Third_PM,
    [PARTYBOX_DESC_FOURTH]     = gText_Fourth,
    [PARTYBOX_DESC_ABLE]       = gText_Able2,
    [PARTYBOX_DESC_NOT_ABLE]   = gText_NotAble,
    [PARTYBOX_DESC_ABLE_2]     = gText_Able3,
    [PARTYBOX_DESC_NOT_ABLE_2] = gText_NotAble2,
    [PARTYBOX_DESC_LEARNED]    = gText_Learned,
    [PARTYBOX_DESC_HAVE]       = gText_Have,
    [PARTYBOX_DESC_DONT_HAVE]  = gText_DontHave,
};

static const u16 sUnused_08615B94[] =
{
    0x0108, 0x0151, 0x0160, 0x015b, 0x002e, 0x005c, 0x0102, 0x0153, 0x014b, 0x00ed, 0x00f1, 0x010d, 0x003a, 0x003b, 0x003f, 0x0071,
    0x00b6, 0x00f0, 0x00ca, 0x00db, 0x00da, 0x004c, 0x00e7, 0x0055, 0x0057, 0x0059, 0x00d8, 0x005b, 0x005e, 0x00f7, 0x0118, 0x0068,
    0x0073, 0x015f, 0x0035, 0x00bc, 0x00c9, 0x007e, 0x013d, 0x014c, 0x0103, 0x0107, 0x0122, 0x009c, 0x00d5, 0x00a8, 0x00d3, 0x011d,
    0x0121, 0x013b, 0x000f, 0x0013, 0x0039, 0x0046, 0x0094, 0x00f9, 0x007f, 0x0123,
};

enum
{
    MENU_SUMMARY,
    MENU_SWITCH,
    MENU_CANCEL1,
    MENU_ITEM,
    MENU_GIVE,
    MENU_TAKE_ITEM,
    MENU_MOVE_ITEM,
	MENU_FOLLOW, //tx_pokemon_follower
    MENU_UNFOLLOW,
    MENU_MAIL,
    MENU_TAKE_MAIL,
    MENU_READ,
    MENU_CANCEL2,
    MENU_SHIFT,
    MENU_SEND_OUT,
    MENU_ENTER,
    MENU_NO_ENTRY,
    MENU_STORE,
    MENU_REGISTER,
    MENU_TRADE1,
    MENU_TRADE2,
    MENU_TOSS,
    MENU_FIELD_MOVES,
};

enum
{
    FIELD_MOVE_CUT,
    FIELD_MOVE_FLASH,
    FIELD_MOVE_ROCK_SMASH,
    FIELD_MOVE_STRENGTH,
    FIELD_MOVE_SURF,
    FIELD_MOVE_FLY,
    FIELD_MOVE_DIVE,
    FIELD_MOVE_WATERFALL,
    FIELD_MOVE_TELEPORT,
    FIELD_MOVE_DIG,
    FIELD_MOVE_SECRET_POWER,
    FIELD_MOVE_MILK_DRINK,
    FIELD_MOVE_SOFT_BOILED,
    FIELD_MOVE_SWEET_SCENT,
};

// What a weird choice of table termination;
#define FIELD_MOVE_TERMINATOR MOVE_SWORDS_DANCE

//tx_pokemon_follower
static const u8 gText_SummaryPkmFollow[] = _("Follow");
static const u8 gText_SummaryPkmUnfollow[] = _("Unfollow");

struct
{
    const u8 *text;
    TaskFunc func;
} static const sCursorOptions[] =
{
    [MENU_SUMMARY] = {gText_Summary5, CursorCb_Summary},
    [MENU_SWITCH] = {gText_Switch2, CursorCb_Switch},
    [MENU_CANCEL1] = {gText_Cancel2, CursorCb_Cancel1},
    [MENU_ITEM] = {gText_Item, CursorCb_Item},
    [MENU_GIVE] = {gMenuText_Give, CursorCb_Give},
    [MENU_TAKE_ITEM] = {gText_Take, CursorCb_TakeItem},
    [MENU_MOVE_ITEM] = {gMenuText_Move, CursorCb_MoveItem},
	[MENU_FOLLOW] = {gText_SummaryPkmFollow, CursorCb_PkmFollow}, //tx_pokemon_follower
    [MENU_UNFOLLOW] = {gText_SummaryPkmUnfollow, CursorCb_PkmUnfollow},
    [MENU_MAIL] = {gText_Mail, CursorCb_Mail},
    [MENU_TAKE_MAIL] = {gText_Take2, CursorCb_TakeMail},
    [MENU_READ] = {gText_Read2, CursorCb_Read},
    [MENU_CANCEL2] = {gText_Cancel2, CursorCb_Cancel2},
    [MENU_SHIFT] = {gText_Shift, CursorCb_SendMon},
    [MENU_SEND_OUT] = {gText_SendOut, CursorCb_SendMon},
    [MENU_ENTER] = {gText_Enter, CursorCb_Enter},
    [MENU_NO_ENTRY] = {gText_NoEntry, CursorCb_NoEntry},
    [MENU_STORE] = {gText_Store, CursorCb_Store},
    [MENU_REGISTER] = {gText_Register, CursorCb_Register},
    [MENU_TRADE1] = {gText_Trade4, CursorCb_Trade1},
    [MENU_TRADE2] = {gText_Trade4, CursorCb_Trade2},
    [MENU_TOSS] = {gMenuText_Toss, CursorCb_Toss},
    [MENU_FIELD_MOVES + FIELD_MOVE_CUT] = {gMoveNames[MOVE_CUT], CursorCb_FieldMove},
    [MENU_FIELD_MOVES + FIELD_MOVE_FLASH] = {gMoveNames[MOVE_FLASH], CursorCb_FieldMove},
    [MENU_FIELD_MOVES + FIELD_MOVE_ROCK_SMASH] = {gMoveNames[MOVE_ROCK_SMASH], CursorCb_FieldMove},
    [MENU_FIELD_MOVES + FIELD_MOVE_STRENGTH] = {gMoveNames[MOVE_STRENGTH], CursorCb_FieldMove},
    [MENU_FIELD_MOVES + FIELD_MOVE_SURF] = {gMoveNames[MOVE_SURF], CursorCb_FieldMove},
    [MENU_FIELD_MOVES + FIELD_MOVE_FLY] = {gMoveNames[MOVE_FLY], CursorCb_FieldMove},
    [MENU_FIELD_MOVES + FIELD_MOVE_DIVE] = {gMoveNames[MOVE_DIVE], CursorCb_FieldMove},
    [MENU_FIELD_MOVES + FIELD_MOVE_WATERFALL] = {gMoveNames[MOVE_WATERFALL], CursorCb_FieldMove},
    [MENU_FIELD_MOVES + FIELD_MOVE_TELEPORT] = {gMoveNames[MOVE_TELEPORT], CursorCb_FieldMove},
    [MENU_FIELD_MOVES + FIELD_MOVE_DIG] = {gMoveNames[MOVE_DIG], CursorCb_FieldMove},
    [MENU_FIELD_MOVES + FIELD_MOVE_SECRET_POWER] = {gMoveNames[MOVE_SECRET_POWER], CursorCb_FieldMove},
    [MENU_FIELD_MOVES + FIELD_MOVE_MILK_DRINK] = {gMoveNames[MOVE_MILK_DRINK], CursorCb_FieldMove},
    [MENU_FIELD_MOVES + FIELD_MOVE_SOFT_BOILED] = {gMoveNames[MOVE_SOFT_BOILED], CursorCb_FieldMove},
    [MENU_FIELD_MOVES + FIELD_MOVE_SWEET_SCENT] = {gMoveNames[MOVE_SWEET_SCENT], CursorCb_FieldMove},
};

static const u8 sPartyMenuAction_SummarySwitchCancel[] = {MENU_SUMMARY, MENU_SWITCH, MENU_CANCEL1};
static const u8 sPartyMenuAction_ShiftSummaryCancel[] = {MENU_SHIFT, MENU_SUMMARY, MENU_CANCEL1};
static const u8 sPartyMenuAction_SendOutSummaryCancel[] = {MENU_SEND_OUT, MENU_SUMMARY, MENU_CANCEL1};
static const u8 sPartyMenuAction_SummaryCancel[] = {MENU_SUMMARY, MENU_CANCEL1};
static const u8 sPartyMenuAction_EnterSummaryCancel[] = {MENU_ENTER, MENU_SUMMARY, MENU_CANCEL1};
static const u8 sPartyMenuAction_NoEntrySummaryCancel[] = {MENU_NO_ENTRY, MENU_SUMMARY, MENU_CANCEL1};
static const u8 sPartyMenuAction_StoreSummaryCancel[] = {MENU_STORE, MENU_SUMMARY, MENU_CANCEL1};
static const u8 sPartyMenuAction_GiveTakeItemCancel[] = {MENU_GIVE, MENU_TAKE_ITEM, MENU_MOVE_ITEM, MENU_CANCEL2};
static const u8 sPartyMenuAction_ReadTakeMailCancel[] = {MENU_READ, MENU_TAKE_MAIL, MENU_CANCEL2};
static const u8 sPartyMenuAction_RegisterSummaryCancel[] = {MENU_REGISTER, MENU_SUMMARY, MENU_CANCEL1};
static const u8 sPartyMenuAction_TradeSummaryCancel1[] = {MENU_TRADE1, MENU_SUMMARY, MENU_CANCEL1};
static const u8 sPartyMenuAction_TradeSummaryCancel2[] = {MENU_TRADE2, MENU_SUMMARY, MENU_CANCEL1};
static const u8 sPartyMenuAction_TakeItemTossCancel[] = {MENU_TAKE_ITEM, MENU_TOSS, MENU_CANCEL1};

// IDs for the action lists that appear when a party mon is selected
enum
{
    ACTIONS_NONE,
    ACTIONS_SWITCH,
    ACTIONS_SHIFT,
    ACTIONS_SEND_OUT,
    ACTIONS_ENTER,
    ACTIONS_NO_ENTRY,
    ACTIONS_STORE,
    ACTIONS_SUMMARY_ONLY,
    ACTIONS_ITEM,
    ACTIONS_MAIL,
    ACTIONS_REGISTER,
    ACTIONS_TRADE,
    ACTIONS_SPIN_TRADE,
    ACTIONS_TAKEITEM_TOSS
};

static const u8 *const sPartyMenuActions[] =
{
    [ACTIONS_NONE]          = NULL,
    [ACTIONS_SWITCH]        = sPartyMenuAction_SummarySwitchCancel,
    [ACTIONS_SHIFT]         = sPartyMenuAction_ShiftSummaryCancel,
    [ACTIONS_SEND_OUT]      = sPartyMenuAction_SendOutSummaryCancel,
    [ACTIONS_ENTER]         = sPartyMenuAction_EnterSummaryCancel,
    [ACTIONS_NO_ENTRY]      = sPartyMenuAction_NoEntrySummaryCancel,
    [ACTIONS_STORE]         = sPartyMenuAction_StoreSummaryCancel,
    [ACTIONS_SUMMARY_ONLY]  = sPartyMenuAction_SummaryCancel,
    [ACTIONS_ITEM]          = sPartyMenuAction_GiveTakeItemCancel,
    [ACTIONS_MAIL]          = sPartyMenuAction_ReadTakeMailCancel,
    [ACTIONS_REGISTER]      = sPartyMenuAction_RegisterSummaryCancel,
    [ACTIONS_TRADE]         = sPartyMenuAction_TradeSummaryCancel1,
    [ACTIONS_SPIN_TRADE]    = sPartyMenuAction_TradeSummaryCancel2,
    [ACTIONS_TAKEITEM_TOSS] = sPartyMenuAction_TakeItemTossCancel,
};

static const u8 sPartyMenuActionCounts[] =
{
    [ACTIONS_NONE]          = 0,
    [ACTIONS_SWITCH]        = ARRAY_COUNT(sPartyMenuAction_SummarySwitchCancel),
    [ACTIONS_SHIFT]         = ARRAY_COUNT(sPartyMenuAction_ShiftSummaryCancel),
    [ACTIONS_SEND_OUT]      = ARRAY_COUNT(sPartyMenuAction_SendOutSummaryCancel),
    [ACTIONS_ENTER]         = ARRAY_COUNT(sPartyMenuAction_EnterSummaryCancel),
    [ACTIONS_NO_ENTRY]      = ARRAY_COUNT(sPartyMenuAction_NoEntrySummaryCancel),
    [ACTIONS_STORE]         = ARRAY_COUNT(sPartyMenuAction_StoreSummaryCancel),
    [ACTIONS_SUMMARY_ONLY]  = ARRAY_COUNT(sPartyMenuAction_SummaryCancel),
    [ACTIONS_ITEM]          = ARRAY_COUNT(sPartyMenuAction_GiveTakeItemCancel),
    [ACTIONS_MAIL]          = ARRAY_COUNT(sPartyMenuAction_ReadTakeMailCancel),
    [ACTIONS_REGISTER]      = ARRAY_COUNT(sPartyMenuAction_RegisterSummaryCancel),
    [ACTIONS_TRADE]         = ARRAY_COUNT(sPartyMenuAction_TradeSummaryCancel1),
    [ACTIONS_SPIN_TRADE]    = ARRAY_COUNT(sPartyMenuAction_TradeSummaryCancel2),
    [ACTIONS_TAKEITEM_TOSS] = ARRAY_COUNT(sPartyMenuAction_TakeItemTossCancel)
};

static const u16 sFieldMoves[] =
{
    MOVE_CUT, MOVE_FLASH, MOVE_ROCK_SMASH, MOVE_STRENGTH, MOVE_SURF, MOVE_FLY, MOVE_DIVE, MOVE_WATERFALL, MOVE_TELEPORT,
    MOVE_DIG, MOVE_SECRET_POWER, MOVE_MILK_DRINK, MOVE_SOFT_BOILED, MOVE_SWEET_SCENT, FIELD_MOVE_TERMINATOR
};

struct
{
    bool8 (*fieldMoveFunc)(void);
    u8 msgId;
} static const sFieldMoveCursorCallbacks[] =
{
    [FIELD_MOVE_CUT]          = {SetUpFieldMove_Cut,         PARTY_MSG_NOTHING_TO_CUT},
    [FIELD_MOVE_FLASH]        = {SetUpFieldMove_Flash,       PARTY_MSG_CANT_USE_HERE},
    [FIELD_MOVE_ROCK_SMASH]   = {SetUpFieldMove_RockSmash,   PARTY_MSG_CANT_USE_HERE},
    [FIELD_MOVE_STRENGTH]     = {SetUpFieldMove_Strength,    PARTY_MSG_CANT_USE_HERE},
    [FIELD_MOVE_SURF]         = {SetUpFieldMove_Surf,        PARTY_MSG_CANT_SURF_HERE},
    [FIELD_MOVE_FLY]          = {SetUpFieldMove_Fly,         PARTY_MSG_CANT_USE_HERE},
    [FIELD_MOVE_DIVE]         = {SetUpFieldMove_Dive,        PARTY_MSG_CANT_USE_HERE},
    [FIELD_MOVE_WATERFALL]    = {SetUpFieldMove_Waterfall,   PARTY_MSG_CANT_USE_HERE},
    [FIELD_MOVE_TELEPORT]     = {SetUpFieldMove_Teleport,    PARTY_MSG_CANT_USE_HERE},
    [FIELD_MOVE_DIG]          = {SetUpFieldMove_Dig,         PARTY_MSG_CANT_USE_HERE},
    [FIELD_MOVE_SECRET_POWER] = {SetUpFieldMove_SecretPower, PARTY_MSG_CANT_USE_HERE},
    [FIELD_MOVE_MILK_DRINK]   = {SetUpFieldMove_SoftBoiled,  PARTY_MSG_NOT_ENOUGH_HP},
    [FIELD_MOVE_SOFT_BOILED]  = {SetUpFieldMove_SoftBoiled,  PARTY_MSG_NOT_ENOUGH_HP},
    [FIELD_MOVE_SWEET_SCENT]  = {SetUpFieldMove_SweetScent,  PARTY_MSG_CANT_USE_HERE},
};

static const u8 *const sUnionRoomTradeMessages[] =
{
    [UR_TRADE_MSG_NOT_MON_PARTNER_WANTS - 1]       = gText_NotPkmnOtherTrainerWants,
    [UR_TRADE_MSG_NOT_EGG - 1]                     = gText_ThatIsntAnEgg,
    [UR_TRADE_MSG_MON_CANT_BE_TRADED_1 - 1]        = gText_PkmnCantBeTradedNow,
    [UR_TRADE_MSG_MON_CANT_BE_TRADED_2 - 1]        = gText_PkmnCantBeTradedNow,
    [UR_TRADE_MSG_PARTNERS_MON_CANT_BE_TRADED - 1] = gText_OtherTrainersPkmnCantBeTraded,
    [UR_TRADE_MSG_EGG_CANT_BE_TRADED -1]           = gText_EggCantBeTradedNow,
    [UR_TRADE_MSG_PARTNER_CANT_ACCEPT_MON - 1]     = gText_OtherTrainerCantAcceptPkmn,
    [UR_TRADE_MSG_CANT_TRADE_WITH_PARTNER_1 - 1]   = gText_CantTradeWithTrainer,
    [UR_TRADE_MSG_CANT_TRADE_WITH_PARTNER_2 - 1]   = gText_CantTradeWithTrainer,
};

static const u32 sHeldItemGfx[] = INCBIN_U32("graphics/interface/hold_icons.4bpp");
const u16 gHeldItemPalette[] = INCBIN_U16("graphics/interface/hold_icons.gbapal");

static const struct OamData sOamData_HeldItem =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = 0,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(8x8),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(8x8),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0,
};

static const union AnimCmd sSpriteAnim_HeldItem[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_HeldMail[] =
{
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_END
};

static const union AnimCmd *const sSpriteAnimTable_HeldItem[] =
{
    sSpriteAnim_HeldItem,
    sSpriteAnim_HeldMail,
};

const struct SpriteSheet gSpriteSheet_HeldItem =
{
    sHeldItemGfx, sizeof(sHeldItemGfx), 0xd750
};

const struct SpritePalette sSpritePalette_HeldItem =
{
    gHeldItemPalette, 0xd750
};

static const struct SpriteTemplate sSpriteTemplate_HeldItem =
{
    0xd750,
    0xd750,
    &sOamData_HeldItem,
    sSpriteAnimTable_HeldItem,
    NULL,
    gDummySpriteAffineAnimTable,
    SpriteCallbackDummy
};

static const struct OamData sOamData_MenuPokeball =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = 0,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x32),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0
};

static const union AnimCmd sPokeballAnim_Closed[] =
{
    ANIMCMD_FRAME(0, 0),
    ANIMCMD_END
};

static const union AnimCmd sPokeballAnim_Open[] =
{
    ANIMCMD_FRAME(16, 0),
    ANIMCMD_END
};

static const union AnimCmd *const sSpriteAnimTable_MenuPokeball[] =
{
    sPokeballAnim_Closed,
    sPokeballAnim_Open
};

static const struct CompressedSpriteSheet sSpriteSheet_MenuPokeball =
{
    gPartyMenuPokeball_Gfx, 0x400, 0x04b0
};

static const struct CompressedSpritePalette sSpritePalette_MenuPokeball =
{
    gPartyMenuPokeball_Pal, 0x04b0
};

// Used for the pokeball sprite on each party slot / Cancel button
static const struct SpriteTemplate sSpriteTemplate_MenuPokeball =
{
    .tileTag = 0x04b0,
    .paletteTag = 0x04b0,
    .oam = &sOamData_MenuPokeball,
    .anims = sSpriteAnimTable_MenuPokeball,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct OamData sOamData_MenuPokeballSmall =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = 0,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(16x16),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(16x16),
    .tileNum = 0,
    .priority = 2,
    .paletteNum = 0,
    .affineParam = 0
};

static const union AnimCmd sSmallPokeballAnim_Closed[] =
{
    ANIMCMD_FRAME(0, 0),
    ANIMCMD_END
};

static const union AnimCmd sSmallPokeballAnim_Open[] =
{
    ANIMCMD_FRAME(4, 0),
    ANIMCMD_END
};

static const union AnimCmd sSmallPokeballAnim_Blank1[] =
{
    ANIMCMD_FRAME(8, 0),
    ANIMCMD_END
};

static const union AnimCmd sSmallPokeballAnim_Blank2[] =
{
    ANIMCMD_FRAME(12, 0),
    ANIMCMD_END
};

static const union AnimCmd sSmallPokeballAnim_Blank3[] =
{
    ANIMCMD_FRAME(16, 0),
    ANIMCMD_END
};

static const union AnimCmd sSmallPokeballAnim_Blank4[] =
{
    ANIMCMD_FRAME(20, 0),
    ANIMCMD_END
};

// The blanks below are never used. See SpriteCB_BounceConfirmCancelButton, where they were intended to be used
static const union AnimCmd *const sSpriteAnimTable_MenuPokeballSmall[] =
{
    sSmallPokeballAnim_Closed,
    sSmallPokeballAnim_Open,
    sSmallPokeballAnim_Blank1,
    sSmallPokeballAnim_Blank2,
    sSmallPokeballAnim_Blank3,
    sSmallPokeballAnim_Blank4
};

static const struct CompressedSpriteSheet sSpriteSheet_MenuPokeballSmall =
{
    gPartyMenuPokeball_Gfx, 0x0300, 0x04b1
};

// Used for the pokeball sprite next to Cancel and Confirm when both are present, otherwise sSpriteTemplate_MenuPokeball is used
static const struct SpriteTemplate sSpriteTemplate_MenuPokeballSmall =
{
    .tileTag = 1201,
    .paletteTag = 1200,
    .oam = &sOamData_MenuPokeballSmall,
    .anims = sSpriteAnimTable_MenuPokeballSmall,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct OamData sOamData_StatusCondition =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = 0,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x8),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x8),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0
};

static const union AnimCmd sSpriteAnim_StatusPoison[] =
{
    ANIMCMD_FRAME(0, 0),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_StatusParalyzed[] =
{
    ANIMCMD_FRAME(4, 0),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_StatusSleep[] =
{
    ANIMCMD_FRAME(8, 0),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_StatusFrozen[] =
{
    ANIMCMD_FRAME(12, 0),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_StatusBurn[] =
{
    ANIMCMD_FRAME(16, 0),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_StatusPokerus[] =
{
    ANIMCMD_FRAME(20, 0),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_StatusFaint[] =
{
    ANIMCMD_FRAME(24, 0),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_Blank[] =
{
    ANIMCMD_FRAME(28, 0),
    ANIMCMD_END
};

static const union AnimCmd *const sSpriteTemplate_StatusCondition[] =
{
    sSpriteAnim_StatusPoison,
    sSpriteAnim_StatusParalyzed,
    sSpriteAnim_StatusSleep,
    sSpriteAnim_StatusFrozen,
    sSpriteAnim_StatusBurn,
    sSpriteAnim_StatusPokerus,
    sSpriteAnim_StatusFaint,
    sSpriteAnim_Blank
};

static const struct CompressedSpriteSheet sSpriteSheet_StatusIcons =
{
    gStatusGfx_Icons, 0x400, 1202
};

static const struct CompressedSpritePalette sSpritePalette_StatusIcons =
{
    gStatusPal_Icons, 1202
};

static const struct SpriteTemplate sSpriteTemplate_StatusIcons =
{
    .tileTag = 1202,
    .paletteTag = 1202,
    .oam = &sOamData_StatusCondition,
    .anims = sSpriteTemplate_StatusCondition,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const u8 *const sUnused_StatStrings[] =
{
    gText_HP4,
    gText_Attack3,
    gText_Defense3,
    gText_SpAtk4,
    gText_SpDef4,
    gText_Speed2
};

const u16 sTMHMMoves[TMHM_COUNT] =
{
    MOVE_FOCUS_PUNCH,
    MOVE_DRAGON_CLAW,
    MOVE_WATER_PULSE,
    MOVE_CALM_MIND,
    MOVE_ROAR,
    MOVE_TOXIC,
    MOVE_HAIL,
    MOVE_BULK_UP,
    MOVE_BULLET_SEED,
    MOVE_HIDDEN_POWER,
    MOVE_SUNNY_DAY,
    MOVE_TAUNT,
    MOVE_ICE_BEAM,
    MOVE_BLIZZARD,
    MOVE_HYPER_BEAM,
    MOVE_LIGHT_SCREEN,
    MOVE_PROTECT,
    MOVE_RAIN_DANCE,
    MOVE_GIGA_DRAIN,
    MOVE_SAFEGUARD,
    MOVE_FRUSTRATION,
    MOVE_SOLAR_BEAM,
    MOVE_IRON_TAIL,
    MOVE_THUNDERBOLT,
    MOVE_THUNDER,
    MOVE_EARTHQUAKE,
    MOVE_RETURN,
    MOVE_DIG,
    MOVE_PSYCHIC,
    MOVE_SHADOW_BALL,
    MOVE_BRICK_BREAK,
    MOVE_DOUBLE_TEAM,
    MOVE_REFLECT,
    MOVE_SHOCK_WAVE,
    MOVE_FLAMETHROWER,
    MOVE_SLUDGE_BOMB,
    MOVE_SANDSTORM,
    MOVE_FIRE_BLAST,
    MOVE_ROCK_TOMB,
    MOVE_AERIAL_ACE,
    MOVE_TORMENT,
    MOVE_FACADE,
    MOVE_SECRET_POWER,
    MOVE_REST,
    MOVE_ATTRACT,
    MOVE_THIEF,
    MOVE_STEEL_WING,		//47 Changed with Low Sweep
    MOVE_SKILL_SWAP,
    MOVE_SNATCH,
    MOVE_OVERHEAT,
    MOVE_LOW_SWEEP,  		//51 Changed with Steel Wing
    MOVE_FOCUS_BLAST,  		//52
    MOVE_ENERGY_BALL,  		//53
    MOVE_FALSE_SWIPE,  		//54
    MOVE_SCALD,  			//55
    MOVE_DARKEST_LARIAT,    //56
    MOVE_CHARGE_BEAM,  		//57
    MOVE_ROOST,  			//58
    MOVE_BRUTAL_SWING,  	//59
    MOVE_QUASH,  			//60
    MOVE_WILL_O_WISP,  		//61
    MOVE_ACROBATICS,  		//62
    MOVE_EMBARGO,  			//63
    MOVE_EXPLOSION,			//64
    MOVE_SHADOW_CLAW,  		//65
    MOVE_PAYBACK,  			//66
    MOVE_SMART_STRIKE,  	//67
    MOVE_GIGA_IMPACT,  		//68
    MOVE_ROCK_POLISH,  		//69
    MOVE_AURORA_VEIL,  		//70
    MOVE_STONE_EDGE,  		//71
    MOVE_VOLT_SWITCH,  		//72
    MOVE_THUNDER_WAVE,  	//73
    MOVE_GYRO_BALL,  		//74
    MOVE_SWORDS_DANCE,  	//75
    MOVE_FLY,  				//76
    MOVE_PSYCH_UP,  		//77
    MOVE_BULLDOZE,  		//78
    MOVE_FROST_BREATH,  	//79
    MOVE_ROCK_SLIDE,  		//80
    MOVE_X_SCISSOR,  		//81
    MOVE_DRAGON_TAIL,  		//82
    MOVE_INFESTATION,  		//83
    MOVE_POISON_JAB,  		//84
    MOVE_DREAM_EATER,  		//85
    MOVE_GRASS_KNOT,  		//86
    MOVE_SWAGGER,  			//87
    MOVE_SLEEP_TALK,  		//88
    MOVE_LUNGE,  			//89
    MOVE_SUBSTITUTE,  		//90
    MOVE_FLASH_CANNON,		//91
    MOVE_TRICK_ROOM,  		//92
    MOVE_WILD_CHARGE,  		//93
    MOVE_SURF,  			//94
    MOVE_SNARL,  			//95
    MOVE_NATURE_POWER,  	//96
    MOVE_DARK_PULSE,  		//97
    MOVE_WATERFALL,  		//98
    MOVE_DAZZLING_GLEAM,  	//99
    MOVE_CONFIDE,  			//100
    MOVE_SLUDGE_WAVE,  		//101 Changed from TM36
    MOVE_LIQUIDATION, 		//102
    MOVE_LEECH_LIFE,  		//103 Changed from TM28
    MOVE_PLAY_ROUGH,  		//104
    MOVE_PSYSHOCK,  		//105 Changed from TM03
    MOVE_AURA_SPHERE,  		//106
    MOVE_POWER_GEM,			//107
    MOVE_EARTH_POWER,  		//108
    MOVE_GUNK_SHOT,  		//109
    MOVE_STEALTH_ROCK,  	//110
    MOVE_HEAT_CRASH,  		//111
    MOVE_POLLEN_PUFF,  		//112
    MOVE_NASTY_PLOT,  		//113
    MOVE_BRAVE_BIRD,  		//114
    MOVE_BUG_BUZZ,  		//115
    MOVE_DRAGON_DANCE,  	//116
    MOVE_BLAZE_KICK,  		//117
    MOVE_TRI_ATTACK,  		//118
    MOVE_DRAIN_PUNCH,  		//119
    MOVE_MYSTICAL_FIRE,  	//120
    MOVE_NONE,  //121
    MOVE_NONE,  //122
    MOVE_NONE,  //123
    MOVE_NONE,  //124
    MOVE_NONE,  //125
    MOVE_NONE,  //126
    MOVE_NONE,  //127
    MOVE_NONE,  //128
    MOVE_NONE,  //129
    MOVE_NONE,  //130
    MOVE_NONE,  //131
    MOVE_NONE,  //132
    MOVE_NONE,  //133
    MOVE_NONE,  //134
    MOVE_NONE,  //135
    MOVE_NONE,  //136
    MOVE_NONE,  //137
    MOVE_NONE,  //138
    MOVE_NONE,  //139
    MOVE_NONE,  //140
    MOVE_NONE,  //141
    MOVE_NONE,  //142
    MOVE_NONE,  //143
    MOVE_NONE,  //144
    MOVE_NONE,  //145
    MOVE_NONE,  //146
    MOVE_NONE,  //147
    MOVE_NONE,  //148
    MOVE_NONE,  //149
    MOVE_NONE,  //150
    MOVE_NONE,  //151
    MOVE_NONE,  //152
    MOVE_NONE,  //153
    MOVE_NONE,  //154
    MOVE_NONE,  //155
    MOVE_NONE,  //156
    MOVE_NONE,  //157
    MOVE_NONE,  //158
    MOVE_NONE,  //159
    MOVE_NONE,  //160
    MOVE_NONE,  //161
    MOVE_NONE,  //162
    MOVE_NONE,  //163
    MOVE_NONE,  //164
    MOVE_NONE,  //165
    MOVE_NONE,  //166
    MOVE_NONE,  //167
    MOVE_NONE,  //168
    MOVE_NONE,  //169
    MOVE_NONE,  //170
    MOVE_NONE,  //171
    MOVE_NONE,  //172
    MOVE_NONE,  //173
    MOVE_NONE,  //174
    MOVE_NONE,  //175
    MOVE_NONE,  //176
    MOVE_NONE,  //177
    MOVE_NONE,  //178
    MOVE_NONE,  //179
    MOVE_NONE,  //180
    MOVE_NONE,  //181
    MOVE_NONE,  //182
    MOVE_NONE,  //183
    MOVE_NONE,  //184
    MOVE_NONE,  //185
    MOVE_NONE,  //186
    MOVE_NONE,  //187
    MOVE_NONE,  //188
    MOVE_NONE,  //189
    MOVE_NONE,  //190
    MOVE_NONE,  //191
    MOVE_NONE,  //192
    MOVE_NONE,  //193
    MOVE_NONE,  //194
    MOVE_NONE,  //195
    MOVE_NONE,  //196
    MOVE_NONE,  //197
    MOVE_NONE,  //198
    MOVE_NONE,  //199
    MOVE_NONE,  //200

    MOVE_CUT,
    MOVE_FLY,
    MOVE_SURF,
    MOVE_STRENGTH,
    MOVE_FLASH,
    MOVE_ROCK_SMASH,
    MOVE_WATERFALL,
    MOVE_DIVE,
};
