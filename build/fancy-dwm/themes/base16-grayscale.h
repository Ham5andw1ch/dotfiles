static const char normbordercolor[] = "#252525";
static const char normbgcolor[]     = "#101010";
static const char normfgcolor[]     = "#252525";

static const char selbordercolor[]  = "#525252";
static const char selbgcolor[]      = "#101010";
static const char selfgcolor[]      = "#525252";

static const char urgbordercolor[]  = "#f7f7f7"; // pending
static const char urgbgcolor[]      = "#101010";
static const char urgfgcolor[]      = "#f7f7f7";

/* custom */
static const char magenta[]         = "#ae95c7";

static const char *colors[][4]      = {
	/*               fg         bg         border   */
    [SchemeNorm] = { normfgcolor,   normbgcolor,   normbordercolor, },
    [SchemeSel]  = { selfgcolor,    selbgcolor,    selbordercolor, },
	[SchemeUrg] =  { urgfgcolor,    urgbgcolor,    urgbordercolor },
	/* Custom colors */
	[SchemeRandom] =  { urgfgcolor,    urgbgcolor,    urgbordercolor },
};

