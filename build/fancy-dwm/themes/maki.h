static const char normbordercolor[] = "#444444";
static const char normbgcolor[]     = "#2E3237";
static const char normfgcolor[]     = "#889190";

static const char selbordercolor[]  = "#8e8e8e";
static const char selbgcolor[]      = "#2E3237";
static const char selfgcolor[]      = "#dfdfdf";

static const char urgbordercolor[]  = "#ce3d3d"; // pending
static const char urgbgcolor[]      = "#2E3237";
static const char urgfgcolor[]      = "#bd2c40";

/* custom */

static const char *colors[][4]      = {
	/*               fg         bg         border   */
    [SchemeNorm] = { normfgcolor,   normbgcolor,   normbordercolor, },
    [SchemeSel]  = { selfgcolor,    selbgcolor,    selbordercolor, },
	[SchemeUrg] =  { urgfgcolor,    urgbgcolor,    urgbordercolor },
	/* Custom colors */
	[SchemeRandom] =  { urgfgcolor,    urgbgcolor,    urgbordercolor },
};


