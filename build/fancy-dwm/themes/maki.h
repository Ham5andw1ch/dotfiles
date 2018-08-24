static const char normbordercolor[] = "#333333";
static const char normbgcolor[]     = "#2E3237";
static const char normfgcolor[]     = "#889190";

static const char selbordercolor[]  = "#dd4444";
static const char selbgcolor[]      = "#2E3237";
static const char selfgcolor[]      = "#dfdfdf";

static const char urgbordercolor[]  = "#2f343a"; // pending
static const char urgbgcolor[]      = "#2E3237";
static const char urgfgcolor[]      = "#bd2c40";

/* custom */
static const char magenta[]         = "#b48ead";

static const char *colors[][4]      = {
	/*               fg         bg         border   */
    [SchemeNorm] = { normfgcolor,   normbgcolor,   normbordercolor, },
    [SchemeSel]  = { selfgcolor,    selbgcolor,    selbordercolor, },
	[SchemeUrg] =  { urgfgcolor,    urgbgcolor,    urgbordercolor },
	/* Custom colors */
	[SchemeRandom] =  { urgfgcolor,    urgbgcolor,    urgbordercolor },
};


