#include "object.h"

/* ----------------------------------------------------------------- */
/* -- Special logic module variables */

namespace Maelstrom {

// in game.cc :
extern int	gDisplayed;
extern int	gGameOn;
extern int	gPaused;
extern int	gBoomDelay;
extern int	gNextBoom;
extern int	gBoomPhase;
extern int	gNumRocks;
extern int	gLastStar;
extern int	gWhenDone;

extern int	gMultiplierShown;
extern int	gPrizeShown;
extern int	gBonusShown;
extern int	gWhenHoming;
extern int	gWhenGrav;
extern int	gWhenDamaged;

extern int	gWhenNova;
extern int	gShakeTime;
extern int	gFreezeTime;

extern int	gWave;
extern Object  *gEnemySprite;
extern int	gWhenEnemy;

}
