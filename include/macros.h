//#define CUSTOM_ASSETS

#define POINTER(TYPE, BASE, POS) ((TYPE*)BASE+POS)

#ifdef CUSTOM_ASSETS

#define ANIM(ACTOR, NAME) CAssetCache::getActorAnimID(#ACTOR, #NAME)
#define NUM_ANIMS(ACTOR) CAssetCache::getNumActorAnims(#ACTOR)
#define FRAME(SPRITESET, NAME) CAssetCache::getSpriteSetFrame(#SPRITESET, #NAME)
#define PALETTE(SPRITESET, NAME) CAssetCache::getSpriteSetPalette(#SPRITESET, #NAME)
#define TR(STRING) CAssetCache::getString(#STRING)

#else

#define CONCAT_ANIM(x, y, z, w) x ## y ## z ## w

// What could go wrong?
#include <ACTOR_ANENOME_ANIM.h>
#include <ACTOR_BABYOCTOPUS_ANIM.h>
#include <ACTOR_BALLBLOB_ANIM.h>
#include <ACTOR_BARNACLEBOY_ANIM.h>
#include <ACTOR_BARNACLEBOY_FMA_ITEMOFS_ANIM.h>
#include <ACTOR_CATERPILLAR_ANIM.h>
#include <ACTOR_CLAM_ANIM.h>
#include <ACTOR_DUSTDEVIL_ANIM.h>
#include <ACTOR_FLAMINGSKULL_ANIM.h>
#include <ACTOR_FLYINGDUTCHMAN_ANIM.h>
#include <ACTOR_GARY_ANIM.h>
#include <ACTOR_GHOST_ANIM.h>
#include <ACTOR_GIANTWORM_ANIM.h>
#include <ACTOR_HERMITCRAB_ANIM.h>
#include <ACTOR_IRONDOGFISH_ANIM.h>
#include <ACTOR_KRUSTY_ANIM.h>
#include <ACTOR_MANRAY_ANIM.h>
#include <ACTOR_MERMAIDMAN_ANIM.h>
#include <ACTOR_MERMAIDMAN_FMA_ITEMOFS_ANIM.h>
#include <ACTOR_MOTHERJELLYFISH_ANIM.h>
#include <ACTOR_PATRICK_ANIM.h>
#include <ACTOR_PLANKTON_ANIM.h>
#include <ACTOR_PUFFAFISH_ANIM.h>
#include <ACTOR_SANDY_ANIM.h>
#include <ACTOR_SEASNAKE_ANIM.h>
#include <ACTOR_SHARKSUB_ANIM.h>
#include <ACTOR_SKELETALFISH_ANIM.h>
#include <ACTOR_SPIDERCRAB_ANIM.h>
#include <ACTOR_SPIKEYANENOME_ANIM.h>
#include <ACTOR_SPONGEBOB_ANIM.h>
#include <ACTOR_SPONGEBOB_CORALBLOWER_ANIM.h>
#include <ACTOR_SPONGEBOB_FMA_ANIM.h>
#include <ACTOR_SPONGEBOB_FMA_ITEMOFS_ANIM.h>
#include <ACTOR_SPONGEBOB_GLOVE_ANIM.h>
#include <ACTOR_SPONGEBOB_JELLYFISH_ANIM.h>
#include <ACTOR_SPONGEBOB_JELLYLAUNCHER_ANIM.h>
#include <ACTOR_SPONGEBOB_NET_ANIM.h>
#include <ACTOR_SPONGEBOB_WAND_ANIM.h>
#include <ACTOR_SQUIDWARD_ANIM.h>
#include <ACTOR_STOMPER_ANIM.h>
#include <sprites.h>
#include <party.h>
#include <shop.h>
#include <trans.h>

// Here for potential asset loading in the future
#define ANIM(A, N) CONCAT_ANIM(ACTOR_, ##A, _, ##N)
#define NUM_ANIMS(ACTOR) NUM_ANIM_##ACTOR
#define FRAME(SPRITESET, NAME) FRM_##NAME
#define PALETTE(SPRITESET, NAME) PAL_##NAME
#define TR(STRING) STRING
#endif