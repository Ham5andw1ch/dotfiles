static const char normbordercolor[] = "#393f45";
static const char normbgcolor[]     = "#1c2023";
static const char normfgcolor[]     = "#747c84";

static const char selbordercolor[]  = "#747c84";
static const char selbgcolor[]      = "#1c2023";
static const char selfgcolor[]      = "#f3f4f5";

static const char urgbordercolor[]  = "#c7ae95"; // pending
static const char urgbgcolor[]      = "#1c2023";
static const char urgfgcolor[]      = "#c7ae95";

/* custom */
static const char magenta[]         = "#ae95c7";

static const char *colors[][4]      = {
	/*               fg         bg         border   */
    [SchemeNorm] = { normfgcolor,   normbgcolor,   normbordercolor, },
    [SchemeSel]  = { selfgcolor,    selbgcolor,    magenta, },
	[SchemeUrg] =  { urgfgcolor,    urgbgcolor,    urgbordercolor },
	/* Custom colors */
	[SchemeRandom] =  { urgfgcolor,    urgbgcolor,    urgbordercolor },
};
