# Hotfix 0.6.8 - Fixed spawning in ground & space, dense fog & more

Today's hotfix addresses the most itching bug since latest version:

* Fixed spawning in space, dense fog, instant attributes drops, unable to mine with multitool and escape pod buried in ground by forcing the game to start in English localization.

Why yes, you read that right. Fixed by switching to English localization.

We are starting to localize the game and so we have implemented scripts that allow us to change language on the fly. No translations in yet, but the background is there. And for some reason, Planet Nomads switched the language to the OS native language. Okay, fair enough. We had a fail switch that reverts language back to English if something like this happens.

But, what we didn't account for... some languages uses comma instead of dot in decimal numbers. When the languages switched back and forth, it also screwed with our internal numbers and this is where you get all the bugs - like instant attributes drops or spawning million kilometers from the planet, unable to dig or really dense fog.

Game development - magical land where languages breaks whole game. For Nomads sake, even the Pi number got hit by this issue like a train! That's why some people started spawning in space.

Well, this was just a little insight why some bugs are easier to spot and fix than others. Thank you for your patience and see you Thursday with more update goodies.

Petr

PS: In case you miss Dan, he is on a well deserved vacation and will be back in a couple of days. He miss ya all.
