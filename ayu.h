/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
    /* 8 normal colors */
    "#000000",   // color0
    "#ff3333",   // color1
    "#b8cc52",   // color2
    "#e6c446",   // color3
    "#36a3d9",   // color4
    "#f07078",   // color5
    "#95e5cb",   // color6
    "#ffffff",   // color7

    /* 8 bright colors */
    "#CCCCCC",   // color8
    "#ff6565",   // color9
    "#e9fe83",   // color10
    "#fff778",   // color11
    "#68d4ff",   // color12
    "#ffa3aa",   // color13
    "#c7fffc",   // color14
    "#ffffff",   // color15

    [256] = "#e5e1cf",    // default foreground color
    [257] = "#0e1419",    // default background color
    [258] = "#f19618",    // cursor color
};

/*
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 258;
static unsigned int defaultrcs = 258;

