# 1.0.6.3 Released Publicly

Hello Nomads,

We've just released the 1.0.6.3 update to the public branch. There's a fix for lags when big container structures are opened and some winch tweaks.

Here is the full list of changes:

* From 1.0.6.2:
	+ optimization of container (inventory) view - asynchronous loading of pre-collapsed containers, faster items rendering, added "take it all" button for all connected containers
	+ added motor locking and keybinding to Winch
	+ rearranged death screen, added "load game" button
* From 1.0.6.3:
	+ fixed deleting of Winch/Shackle in Creative mode
	+ modified physics of connection ("rope")
	+ do not break connection caused by same grid as corresponding Winch or Shackle is on
	+ fix bug that occurred when splitting grid containing winch or shackle
	+ allow connecting winch & shackle on the same grid
	+ added debug commands for achievements
	+ fixed achievements that requied block cutting
	+ fix not rendered character head inside
	+ fix lens flare effect rendered inside Stasis Chamber

