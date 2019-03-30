#pragma once
#include "ControlHeader.h"
float Timer();

//// CONSTANTS ////
const string SOUND_DIR = ".\\media\\sounds\\";

//// OPTIMISATIONS ////
void LoadAllSounds();

//// MUSIC ////
void PlayMenuMusic();

void RestartMusic();

// Level Music
void PlayLevel1Music();

//// SFX ////
void PlayJumpSound();
void PlayCoinPickupSound();
void PlayDeathSound();